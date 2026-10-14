#include "dominio/Timestamp.h"
#include <sstream>
#include <vector>
#include <stdexcept>
#include <array>

namespace {
    const std::array<std::string, 12> MESES = {
        "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
        "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
    };

    bool eDigitos(const std::string& s) {
        if (s.empty()) return false;
        for (char c : s) {
            if (c < '0' || c > '9') return false;
        }
        return true;
    }
}

bool Timestamp::ehBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int Timestamp::diasNoMes(int mes, int ano) {
    static const int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && ehBissexto(ano)) return 29;
    return dias[mes - 1];
}

bool Timestamp::validar(const std::string& texto, int& dia, int& mes, int& ano, int& hora, int& minuto) {
    // Divide a string em partes separadas por '-': DIA, MES, ANO, HORARIO
    std::vector<std::string> partes;
    std::stringstream ss(texto);
    std::string token;
    while (std::getline(ss, token, '-')) {
        partes.push_back(token);
    }
    if (partes.size() != 4) return false;

    const std::string& diaTxt = partes[0];
    const std::string& mesTxt = partes[1];
    const std::string& anoTxt = partes[2];
    const std::string& horarioTxt = partes[3];

    // DIA: 1 a 31
    if (!eDigitos(diaTxt) || diaTxt.size() > 2) return false;
    dia = std::stoi(diaTxt);
    if (dia < 1 || dia > 31) return false;

    // MES: sigla valida
    mes = -1;
    for (std::size_t i = 0; i < MESES.size(); ++i) {
        if (MESES[i] == mesTxt) {
            mes = static_cast<int>(i) + 1;
            break;
        }
    }
    if (mes == -1) return false;

    // ANO: 2000 a 2099
    if (!eDigitos(anoTxt) || anoTxt.size() != 4) return false;
    ano = std::stoi(anoTxt);
    if (ano < 2000 || ano > 2099) return false;

    // valida dia conforme mes/ano (bissexto)
    if (dia > diasNoMes(mes, ano)) return false;

    // HORARIO: HH:MM, 00:00 a 23:59
    std::size_t posDoisPontos = horarioTxt.find(':');
    if (posDoisPontos == std::string::npos) return false;
    std::string horaTxt = horarioTxt.substr(0, posDoisPontos);
    std::string minutoTxt = horarioTxt.substr(posDoisPontos + 1);

    if (!eDigitos(horaTxt) || horaTxt.size() != 2) return false;
    if (!eDigitos(minutoTxt) || minutoTxt.size() != 2) return false;

    hora = std::stoi(horaTxt);
    minuto = std::stoi(minutoTxt);
    if (hora < 0 || hora > 23) return false;
    if (minuto < 0 || minuto > 59) return false;

    return true;
}

Timestamp::Timestamp(const std::string& valor) {
    setValor(valor);
}

void Timestamp::setValor(const std::string& valor) {
    int d, m, a, h, mi;
    if (!validar(valor, d, m, a, h, mi)) {
        throw std::invalid_argument("Timestamp invalido: " + valor);
    }
    this->valor = valor;
    this->dia = d;
    this->mes = m;
    this->ano = a;
    this->hora = h;
    this->minuto = mi;
}

std::string Timestamp::getValor() const { return valor; }
int Timestamp::getDia() const { return dia; }
int Timestamp::getMes() const { return mes; }
int Timestamp::getAno() const { return ano; }
int Timestamp::getHora() const { return hora; }
int Timestamp::getMinuto() const { return minuto; }

long Timestamp::paraMinutosAbsolutos() const {
    long diasAcumulados = 0;
    for (int a = 2000; a < ano; ++a) {
        diasAcumulados += ehBissexto(a) ? 366 : 365;
    }
    for (int m = 1; m < mes; ++m) {
        diasAcumulados += diasNoMes(m, ano);
    }
    diasAcumulados += (dia - 1);

    long minutosAcumulados = diasAcumulados * 24L * 60L;
    minutosAcumulados += hora * 60L + minuto;
    return minutosAcumulados;
}
