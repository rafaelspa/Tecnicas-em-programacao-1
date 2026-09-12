#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Refatorando dominios: Limite" << endl;

    Limite limite;

    limite.setLimite(1);
    cout << "1 ok" << endl;
    limite.setLimite(100);

    return 0;
}
