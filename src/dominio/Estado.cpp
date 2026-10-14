#include "dominio/Estado.h"
#include <stdexcept>

bool Estado::validar(const std::string& texto) {
    return texto == "A FAZER" || texto == "FAZENDO" || texto == "FEITO";
}

Estado::Valor Estado::converterParaEnum(const std::string& texto) {
    if (texto == "A FAZER") return A_FAZER;
    if (texto == "FAZENDO") return FAZENDO;
    return FEITO;
}

std::string Estado::converterParaTexto(Valor valor) {
    switch (valor) {
        case A_FAZER: return "A FAZER";
        case FAZENDO: return "FAZENDO";
        case FEITO:   return "FEITO";
    }
    return "";
}

Estado::Estado(const std::string& texto) {
    setValor(texto);
}

Estado::Estado(Valor valor) : valor(valor) {}

void Estado::setValor(const std::string& texto) {
    if (!validar(texto)) {
        throw std::invalid_argument("Estado invalido: " + texto);
    }
    this->valor = converterParaEnum(texto);
}

Estado::Valor Estado::getValor() const {
    return valor;
}

std::string Estado::getTexto() const {
    return converterParaTexto(valor);
}
