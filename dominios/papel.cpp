#include "dominios.hpp"

void Papel::setPapel(string papel) {
    try {
        validar(papel);
        this->papel = papel;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}

void Papel::validar(string papel) {
    if (papel != "DESENVOLVEDOR" &&
        papel != "GESTOR") {
            throw invalid_argument("Papel invalido");
        }
}
