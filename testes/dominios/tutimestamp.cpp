#include <string>
#include "../../dominios/dominios.hpp"
#include "tudominios.hpp"
// #include <iostream>

using namespace std;


 const string TUTimestamp::VALOR_VALIDO = "31-DEZ-2012-10:20";
 const string TUTimestamp::VALOR_INVALIDO  = "31-DEZ-2012-24:20";

 void TUTimestamp::setUp(){
    timestamp = new Timestamp();
    estado = SUCESSO;
}

void TUTimestamp::tearDown(){
    delete timestamp;
}

void TUTimestamp::testarCenarioSucesso(){
    try{
        timestamp->setTimestamp(VALOR_VALIDO);
        cout << timestamp->getTimestamp() << endl;
        if (timestamp->getTimestamp() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTimestamp::testarCenarioFalha(){
    try{
        timestamp->setTimestamp(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (timestamp->getTimestamp() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUTimestamp::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//   Timestamp timestamp = Timestamp("31-DEZ-2012-10:20");
//
//   cout << "Valida \"" + timestamp.getTimestamp() + "\": " << timestamp.validaTimestamp()  << endl;
//
//   timestamp.setTimestamp("32-DEZ-2012-10:20");
//
//   cout << "Valida \"" + timestamp.getTimestamp() + "\": " << timestamp.validaTimestamp()  << endl;
//
//   timestamp.setTimestamp("31-DEC-2012-10:20");
//
//   cout << "Valida \"" + timestamp.getTimestamp() + "\": " << timestamp.validaTimestamp()  << endl;
//
//   timestamp.setTimestamp("31-DEZ-2100-10:20");
//
//   cout << "Valida \"" + timestamp.getTimestamp() + "\": " << timestamp.validaTimestamp()  << endl;
//
//   timestamp.setTimestamp("31-DEZ-2012-24:20");
//
//   cout << "Valida \"" + timestamp.getTimestamp() + "\": " << timestamp.validaTimestamp()  << endl;
//
//   timestamp.setTimestamp("31-DEZ-2012-10:60");
//
//   cout << "Valida \"" + timestamp.getTimestamp() + "\": " << timestamp.validaTimestamp()  << endl;
//
//   timestamp.setTimestamp("31-DEZ-2014-10:20");
//
//   cout << "Valida \"" + timestamp.getTimestamp() + "\": " << timestamp.validaTimestamp()  << endl;
//
//   timestamp.setTimestamp("31-DEZ-2016-10:20");
//
//   cout << "Valida \"" + timestamp.getTimestamp() + "\": " << timestamp.validaTimestamp()  << endl;

