#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Refatorando dominios: Estado" << endl;

    Estado estado;

    estado.setEstado(Estado::A_FAZER);
    estado.setEstado(Estado::FAZENDO);
    estado.setEstado(Estado::FEITO);
    estado.setEstado("Invalido");

    return 0;
}
