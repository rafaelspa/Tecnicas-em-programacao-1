#include "dominio/Tamanho.h"
#include <stdexcept>

bool Tamanho::validar(const std::string& texto) {
    return texto == "GRANDE" || texto == "MEDIO" || texto == "PEQUENO";
}

Tamanho::Valor Tamanho::converterParaEnum(const std::string& texto) {
    if (texto == "GRANDE") return GRANDE;
    if (texto == "MEDIO") return MEDIO;
    return PEQUENO;
}

std::string Tamanho::converterParaTexto(Valor valor) {
    switch (valor) {
        case GRANDE:  return "GRANDE";
        case MEDIO:   return "MEDIO";
        case PEQUENO: return "PEQUENO";
    }
    return "";
}

Tamanho::Tamanho(const std::string& texto) {
    setValor(texto);
}

Tamanho::Tamanho(Valor valor) : valor(valor) {}

void Tamanho::setValor(const std::string& texto) {
    if (!validar(texto)) {
        throw std::invalid_argument("Tamanho invalido: " + texto);
    }
    this->valor = converterParaEnum(texto);
}

Tamanho::Valor Tamanho::getValor() const { return valor; }
std::string Tamanho::getTexto() const { return converterParaTexto(valor); }
