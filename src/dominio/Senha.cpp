#include "dominio/Senha.h"
#include <regex>
#include <stdexcept>

bool Senha::validar(const std::string& texto) {

    static const std::regex regexSenha("^(?=.*[A-Za-z])(?=.*[0-9])[A-Za-z0-9]{5}$");
    return std::regex_match(texto, regexSenha);
}

Senha::Senha(const std::string& valor) {
    setValor(valor);
}

void Senha::setValor(const std::string& valor) {
    if (!validar(valor)) {
        throw std::invalid_argument("Senha invalida: deve ter 5 caracteres alfanumericos com ao menos 1 letra e 1 digito");
    }
    this->valor = valor;
}

std::string Senha::getValor() const {
    return valor;
}
