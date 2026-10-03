#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include "testes/dominios/tuemail.hpp"
#include "testes/dominios/dominios.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Teste Unitario: email" << endl;

    TUEmail tuemail;

    cout << tuemail.run() << endl;

    return 0;
}
