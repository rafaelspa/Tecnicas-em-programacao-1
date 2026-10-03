#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include "testes/dominios/tudominios.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Teste Unitario: limite e nome" << endl;

    TULimite tulimite;

    cout << tulimite.run() << endl;

    TUNome tunome;

    cout << tunome.run() << endl;

    return 0;
}
