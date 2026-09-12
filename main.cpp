#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Refatorando dominios: Nome" << endl;

    Nome nome;
    string n;
    n = "Nome nome nome";

    nome.setNome(n);
    cout << n + " ok" << endl;
    nome.setNome("Nome invalido 1");

    return 0;
}
