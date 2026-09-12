#include "dominios.hpp"

void Estado::setEstado(string estado) {
    try {
        validar(estado);
        this->estado = estado;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}

void Estado::validar(string estado) {
    if (estado != Estado::A_FAZER &&
        estado != Estado::FAZENDO &&
        estado != Estado::FEITO) {
            throw invalid_argument("Estado invalido");
        }
}
