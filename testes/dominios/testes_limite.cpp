#include <string>
#include "../../dominios/dominios.hpp"
#include <iostream>

using namespace std;

void testes_limite () {
    Limite limite;

    cout << "Limite minimo: " << limite.getLimiteMinimo() << endl;
    cout << "Limite maximo: " << limite.getLimiteMaximo() << endl;
}
