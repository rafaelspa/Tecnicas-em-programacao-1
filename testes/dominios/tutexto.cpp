#include <string>
#include "../../dominios/dominios.hpp"
#include "tudominios.hpp"
#include <iostream>

using namespace std;

const string TUTexto::VALOR_VALIDO = "Texto valido.";
const string TUTexto::VALOR_INVALIDO = "Texto invalido..";

void TUTexto::setUp(){
    texto = new Texto();
    estado = SUCESSO;
}

void TUTexto::tearDown(){
    delete texto;
}

void TUTexto::testarCenarioSucesso(){
    try{
        texto->setTexto(VALOR_VALIDO);
        if (texto->getTexto() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTexto::testarCenarioFalha(){
    try{
        texto->setTexto(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (texto->getTexto() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUTexto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//
//    Texto texto = Texto("texto");
//
//    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;
//
//    texto.setTexto("texto com 30 caracterestexto c");
//
//    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;
//
//    texto.setTexto("texto com 31 caracterestexto ca");
//
//    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;
//
//    texto.setTexto("texto com ponto final.");
//
//    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;
//
//    texto.setTexto("Texto comecando com maiuscula");
//
//    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;
//
//    texto.setTexto("Texto com maiuscula e ponto.");
//
//    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;
//
//    texto.setTexto("Texto com pontuacao!");
//
//    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;
//
//    texto.setTexto("Texto, com pontuacao.");
//
//    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;
//
//    texto.setTexto("Texto com pontuacao dupla ..");
//
//    cout << "validar texto \"" + texto.getTexto() + "\": " << texto.validaTexto() << endl;

