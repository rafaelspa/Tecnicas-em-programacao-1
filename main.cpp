#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Refatorando dominios: Texto" << endl;

    Texto texto;

    texto.setTexto("Texto validoooo.");
    cout << "ok" << endl;
    texto.setTexto("Texto invalido");
    return 0;
}
