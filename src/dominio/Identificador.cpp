#include "dominio/Identificador.h"
#include <regex>
#include <stdexcept>

bool Identificador::validar(const std::string& texto) {
    static const std::regex regexIdentificador("^[a-zA-Z]{3}[0-9]{3}$");
    return std::regex_match(texto, regexIdentificador);
}

Identificador::Identificador(const std::string& valor) {
    setValor(valor);
}

void Identificador::setValor(const std::string& valor) {
    if (!validar(valor)) {
        throw std::invalid_argument("Identificador invalido: " + valor);
    }
    this->valor = valor;
}

std::string Identificador::getValor() const {
    return valor;
}
