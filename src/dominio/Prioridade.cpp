#include "dominio/Prioridade.h"
#include <stdexcept>

bool Prioridade::validar(const std::string& texto) {
    return texto == "ALTA" || texto == "MEDIA" || texto == "BAIXA";
}

Prioridade::Valor Prioridade::converterParaEnum(const std::string& texto) {
    if (texto == "ALTA") return ALTA;
    if (texto == "MEDIA") return MEDIA;
    return BAIXA;
}

std::string Prioridade::converterParaTexto(Valor valor) {
    switch (valor) {
        case ALTA:  return "ALTA";
        case MEDIA: return "MEDIA";
        case BAIXA: return "BAIXA";
    }
    return "";
}

Prioridade::Prioridade(const std::string& texto) {
    setValor(texto);
}

Prioridade::Prioridade(Valor valor) : valor(valor) {}

void Prioridade::setValor(const std::string& texto) {
    if (!validar(texto)) {
        throw std::invalid_argument("Prioridade invalida: " + texto);
    }
    this->valor = converterParaEnum(texto);
}

Prioridade::Valor Prioridade::getValor() const { return valor; }
std::string Prioridade::getTexto() const { return converterParaTexto(valor); }
