#include "dominio/Texto.h"
#include <cctype>
#include <stdexcept>

bool Texto::validar(const std::string& texto) {
    if (texto.empty() || texto.size() > 30) return false;
    if (!std::isupper(static_cast<unsigned char>(texto.front()))) return false;
    if (texto.back() != '.') return false;

    static const std::string pontuacoes = ",;.:?!";
    bool anteriorEhPontuacao = false;

    for (char c : texto) {
        unsigned char uc = static_cast<unsigned char>(c);
        bool ehLetra = std::isalpha(uc) != 0;
        bool ehDigito = std::isdigit(uc) != 0;
        bool ehEspaco = (c == ' ');
        bool ehPontuacao = pontuacoes.find(c) != std::string::npos;

        if (!ehLetra && !ehDigito && !ehEspaco && !ehPontuacao) {
            return false;
        }
        if (ehPontuacao && anteriorEhPontuacao) {
            return false;
        }
        anteriorEhPontuacao = ehPontuacao;
    }
    return true;
}

Texto::Texto(const std::string& valor) {
    setValor(valor);
}

void Texto::setValor(const std::string& valor) {
    if (!validar(valor)) {
        throw std::invalid_argument("Texto invalido: " + valor);
    }
    this->valor = valor;
}

std::string Texto::getValor() const {
    return valor;
}
