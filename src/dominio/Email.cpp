#include "dominio/Email.h"
#include <regex>
#include <stdexcept>

bool Email::validar(const std::string& texto) {
    std::size_t posArroba = texto.find('@');
    if (posArroba == std::string::npos || texto.find('@', posArroba + 1) != std::string::npos) {
        return false;
    }

    std::string parteLocal = texto.substr(0, posArroba);
    std::string dominio = texto.substr(posArroba + 1);

    if (parteLocal.empty() || parteLocal.size() > 64) return false;
    if (dominio.empty() || dominio.size() > 255) return false;


    static const std::regex regexParteLocal("^[a-z0-9]+([.-][a-z0-9]+)*$");

    static const std::regex regexDominio("^[a-z0-9]+(-[a-z0-9]+)*(\\.[a-z0-9]+(-[a-z0-9]+)*)*$");

    return std::regex_match(parteLocal, regexParteLocal) &&
           std::regex_match(dominio, regexDominio);
}

Email::Email(const std::string& valor) {
    setValor(valor);
}

void Email::setValor(const std::string& valor) {
    if (!validar(valor)) {
        throw std::invalid_argument("Email invalido: " + valor);
    }
    this->valor = valor;
}

std::string Email::getValor() const {
    return valor;
}
