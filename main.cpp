#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include "testes/dominios/tudominios.hpp"
#include "testes/entidades/tuentidades.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Teste Unitario Entidade: Pessoa" << endl;

    TUPessoa tupessoa;

    cout << tupessoa.run() << endl;

    return 0;
}
