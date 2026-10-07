#include <string>
#include "../../dominios/dominios.hpp"
#include "tudominios.hpp"
#include <iostream>

using namespace std;

const string TUSenha::VALOR_VALIDO = "senh1";
const string TUSenha::VALOR_INVALIDO = "senha";

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getSenha() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//    Senha senha = Senha("senha");
//
//    cout << "valida senha \"" << senha.getSenha() << "\": " << senha.validaSenha() << endl;
//
//    senha.setSenha("senh4");
//
//    cout << "valida senha \"" << senha.getSenha() << "\": " << senha.validaSenha() << endl;
//
//    senha.setSenha("5enha");
//
//    cout << "valida senha \"" << senha.getSenha() << "\": " << senha.validaSenha() << endl;
//
//    senha.setSenha("12345");
//
//    cout << "valida senha \"" << senha.getSenha() << "\": " << senha.validaSenha() << endl;
//
//    senha.setSenha("senha1");
//
//    cout << "valida senha \"" << senha.getSenha() << "\": " << senha.validaSenha() << endl;

