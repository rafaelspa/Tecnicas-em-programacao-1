#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Refatorando dominios: Tamanho" << endl;

    Tamanho tamanho;

    tamanho.setTamanho(Tamanho::GRANDE);
    tamanho.setTamanho(Tamanho::MEDIO);
    tamanho.setTamanho(Tamanho::PEQUENO);
    cout << "ok" << endl;
    tamanho.setTamanho("Tamanho invalido");
    return 0;
}
