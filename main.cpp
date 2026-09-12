#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Refatorando dominios: Identificador" << endl;

    Identificador identificador;

    identificador.setIdentificador("abc123");
    cout << "abc123 ok" << endl;
    identificador.setIdentificador("aaaaaa");

    return 0;
}
