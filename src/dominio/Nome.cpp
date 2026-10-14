#include "dominio/Nome.h"
#include <regex>
#include <stdexcept>

bool Nome::validar(const std::string& texto) {
    if (texto.empty() || texto.size() > 15) return false;

    static const std::regex regexNome("^[A-Za-z]([A-Za-z]| [A-Za-z])*$");
    return std::regex_match(texto, regexNome);
}

Nome::Nome(const std::string& valor) {
    setValor(valor);
}

void Nome::setValor(const std::string& valor) {
    if (!validar(valor)) {
        throw std::invalid_argument("Nome invalido: " + valor);
    }
    this->valor = valor;
}

std::string Nome::getValor() const {
    return valor;
}
