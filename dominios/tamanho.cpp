#include "dominios.hpp"

void Tamanho::validar(string tamanho) {
    if (tamanho != Tamanho::GRANDE &&
        tamanho != Tamanho::MEDIO &&
        tamanho != Tamanho::PEQUENO) {
        throw invalid_argument("Tamanho invalido");
    }
}

void Tamanho::setTamanho(string tamanho) {
    try {
        validar(tamanho);
        this->tamanho = tamanho;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}
