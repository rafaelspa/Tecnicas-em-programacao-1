#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Entidade Pessoa" << endl;
    Email email;
    email.setEmail("email");
    Nome nome = Nome("nome");
    Senha senha = Senha("senha");
    Papel papel;
    papel.setPapel(papel.DESENVOLVEDOR);
    Pessoa pessoa = Pessoa(email, nome, senha, papel);

    return 0;
}
