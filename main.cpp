#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Refatorando dominios: Senha" << endl;

    Senha senha;

    senha.setSenha("12asj");
    cout << "ok" << endl;
    senha.setSenha("senha");
    return 0;
}
