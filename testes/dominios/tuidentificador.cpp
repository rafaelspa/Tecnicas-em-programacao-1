#include <string>
#include "../../dominios/dominios.hpp"
#include "tuidentificador.hpp"
#include <iostream>

using namespace std;


 const string TUIdentificador::VALOR_VALIDO = "abc123";
 const string TUIdentificador::VALOR_INVALIDO = "abcdef";

 void TUIdentificador::setUp(){
    identificador = new Identificador();
    estado = SUCESSO;
}

void TUIdentificador::tearDown(){
    delete identificador;
}

void TUIdentificador::testarCenarioSucesso(){
    try{
        identificador->setIdentificador(VALOR_VALIDO);
        if (identificador->getIdentificador() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUIdentificador::testarCenarioFalha(){
    try{
        identificador->setIdentificador(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (identificador->getIdentificador() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUIdentificador::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}



//    Identificador identificador;
//    string id = "abc123";
//    identificador.setIdentificador(id);
//    identificador.setIdentificador("123abc");
//    identificador.setIdentificador("abcd123");
//    identificador.setIdentificador("abd1234");
//    identificador.setIdentificador("abcd12");
//    identificador.setIdentificador("ab1234");

