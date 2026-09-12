#include <string>
#include "../../dominios/dominios.hpp"
#include <iostream>

using namespace std;

void testesIdentificador () {
    Identificador identificador;
    string id = "abc123";
    identificador.setIdentificador(id);
    identificador.setIdentificador("123abc");
    identificador.setIdentificador("abcd123");
    identificador.setIdentificador("abd1234");
    identificador.setIdentificador("abcd12");
    identificador.setIdentificador("ab1234");
}
