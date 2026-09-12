#include "dominios.hpp"

void Limite::validar(int valor) {
    if (valor < limiteMinimo || valor > limiteMaximo)
        throw invalid_argument("Limite invalido");
};

void Limite::setLimite(int limite) {
    try {
        validar(limite);
        this->limite = limite;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}
