#include "dominios.hpp"


void Prioridade::validar(string prioridade) {
    if (prioridade != Prioridade::ALTA &&
        prioridade != Prioridade::MEDIA &&
        prioridade != Prioridade::BAIXA) {
            throw invalid_argument("Prioridade invalida");
        }
}

void Prioridade::setPrioridade(string prioridade) {
    try {
        validar(prioridade);
        this->prioridade = prioridade;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}
