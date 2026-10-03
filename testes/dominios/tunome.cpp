#include <string>
#include "../../dominios/dominios.hpp"
#include "tudominios.hpp"
// #include <iostream>

using namespace std;

 const string TUNome::VALOR_VALIDO = "Nome";
 const string TUNome::VALOR_INVALIDO  = "Nome invalido pelo tamanho";

 void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getNome() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//    Nome nome("nome1");
//
//    cout << "nome: " << nome.getNome() << endl;
//
//    nome.setNome("nome2");
//
//    cout << "nome: " << nome.getNome() << endl;
//
//    nome.setNome("nome com mais de 15 caracteres");
//
//    cout << "valida nome \"nome com mais de 15 caracteres\": " << nome.validaNome()<< endl;
//
//    nome.setNome(" espaco comeco");
//
//    cout << "valida nome \" espaco comeco\": " << nome.validaNome()<< endl;
//
//    nome.setNome("espaco fim ");
//
//    cout << "valida nome \"espaco fim \": " << nome.validaNome()<< endl;
//
//    nome.setNome("nome com 15 car");
//
//    cout << "valida nome \"nome com 15 car\": " << nome.validaNome()<< endl;

