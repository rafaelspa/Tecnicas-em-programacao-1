#include "dominios.hpp"

void Identificador::validar(string identificador) {
    regex r("(?=^.{6}$)([A-Za-z]{3}[0-9]{3})");
    if (!regex_match(identificador, r)) {
        throw invalid_argument("Identificador invalido");
    }
}

void Identificador::setIdentificador(string identificador) {
    try {
        validar(identificador);
        this->identificador = identificador;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}
