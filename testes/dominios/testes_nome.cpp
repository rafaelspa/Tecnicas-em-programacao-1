#include <string>
#include "../../dominios/dominios.hpp"
#include <iostream>

using namespace std;

void testes_nome () {
    Nome nome("nome1");

    cout << "nome: " << nome.getNome() << endl;

    nome.setNome("nome2");

    cout << "nome: " << nome.getNome() << endl;

    nome.setNome("nome com mais de 15 caracteres");

    cout << "valida nome \"nome com mais de 15 caracteres\": " << nome.validaNome()<< endl;

    nome.setNome(" espaco comeco");

    cout << "valida nome \" espaco comeco\": " << nome.validaNome()<< endl;

    nome.setNome("espaco fim ");

    cout << "valida nome \"espaco fim \": " << nome.validaNome()<< endl;

    nome.setNome("nome com 15 car");

    cout << "valida nome \"nome com 15 car\": " << nome.validaNome()<< endl;
}
