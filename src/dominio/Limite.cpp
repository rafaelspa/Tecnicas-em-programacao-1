#include "dominio/Limite.h"
#include <stdexcept>

bool Limite::validar(int valor) {
    return valor >= 1 && valor <= 25;
}

Limite::Limite(int valor) {
    setValor(valor);
}

void Limite::setValor(int valor) {
    if (!validar(valor)) {
        throw std::invalid_argument("Limite invalido: deve estar entre 1 e 25");
    }
    this->valor = valor;
}

int Limite::getValor() const {
    return valor;
}
