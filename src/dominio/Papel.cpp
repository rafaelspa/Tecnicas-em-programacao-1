#include "dominio/Papel.h"
#include <stdexcept>

bool Papel::validar(const std::string& texto) {
    return texto == "GESTOR" || texto == "DESENVOLVEDOR";
}

Papel::Valor Papel::converterParaEnum(const std::string& texto) {
    return texto == "GESTOR" ? GESTOR : DESENVOLVEDOR;
}

std::string Papel::converterParaTexto(Valor valor) {
    return valor == GESTOR ? "GESTOR" : "DESENVOLVEDOR";
}

Papel::Papel(const std::string& texto) {
    setValor(texto);
}

Papel::Papel(Valor valor) : valor(valor) {}

void Papel::setValor(const std::string& texto) {
    if (!validar(texto)) {
        throw std::invalid_argument("Papel invalido: " + texto);
    }
    this->valor = converterParaEnum(texto);
}

Papel::Valor Papel::getValor() const { return valor; }
std::string Papel::getTexto() const { return converterParaTexto(valor); }
