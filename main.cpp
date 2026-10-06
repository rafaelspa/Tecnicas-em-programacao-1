#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include "testes/dominios/tudominios.hpp"
#include "testes/entidades/tuentidades.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Teste Unitario Dominio: Identificador" << endl;

    TUIdentificador tuidentificador;

    cout << tuidentificador.run() << endl;

    return 0;
}
