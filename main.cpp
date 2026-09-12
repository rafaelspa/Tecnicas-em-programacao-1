#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Refatorando dominios: Papel" << endl;

    Papel papel;

    papel.setPapel(Papel::DESENVOLVEDOR);
    papel.setPapel(Papel::GESTOR);
    cout << "ok" << endl;
    papel.setPapel("Papel Invalido");

    return 0;
}
