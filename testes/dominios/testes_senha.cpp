#include <string>
#include "../../dominios/dominios.hpp"
#include <iostream>

using namespace std;

void testes_nome () {
    Senha senha = Senha("senha");

    cout << "valida senha \"" << senha.getSenha() << "\": " << senha.validaSenha() << endl;

    senha.setSenha("senh4");

    cout << "valida senha \"" << senha.getSenha() << "\": " << senha.validaSenha() << endl;

    senha.setSenha("5enha");

    cout << "valida senha \"" << senha.getSenha() << "\": " << senha.validaSenha() << endl;

    senha.setSenha("12345");

    cout << "valida senha \"" << senha.getSenha() << "\": " << senha.validaSenha() << endl;

    senha.setSenha("senha1");

    cout << "valida senha \"" << senha.getSenha() << "\": " << senha.validaSenha() << endl;
}
