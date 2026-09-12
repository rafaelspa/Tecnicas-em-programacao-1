#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Refatorando dominios: Prioridade" << endl;

    Prioridade prioridade;

    prioridade.setPrioridade(Prioridade::ALTA);
    prioridade.setPrioridade(Prioridade::MEDIA);
    prioridade.setPrioridade(Prioridade::BAIXA);
    cout << "ok" << endl;
    prioridade.setPrioridade("Prioridade invalida");
    return 0;
}
