#include <string>
#include "../../dominios/dominios.hpp"
#include <iostream>

using namespace std;

void testes_estado () {
    Identificador identificador;
    string id = "abc123";
    cout << id + "  " << Identificador::validaIdentificador(id) << endl;
    cout << "123abc  " << Identificador::validaIdentificador("123abc") << endl;
    cout << "abcd123 " << Identificador::validaIdentificador("abcd123") << endl;
    cout << "abd1234 " << Identificador::validaIdentificador("abd1234") << endl;
    cout << "abcd12  " << Identificador::validaIdentificador("abcd12") << endl;
    cout << "ab1234  " << Identificador::validaIdentificador("ab1234") << endl;
}
