#include <string>
#include "../../dominios/dominios.hpp"
#include <iostream>

using namespace std;

void testes_email () {
    string partelocal64 = "emailcom64caracteresparasertesteunitariodaclasseemailvalidacao12";
    string partelocal65 = "emailcom65caracteresparasertesteunitariodaclasseemailvalidacao123";
    string dominio255 = "emailcom255caracteresparasertesteunitariodaclasseemailcom255caracteresparasertesteunitariodaclasseemailcom255caracteresparasertesteunitariodaclasseemailcom255caracteresparasertesteunitariodaclasseemailcom255caracteresparasertesteunitariodaclasseemailcom25";
    string dominio256 = "emailcom256caracteresparasertesteunitariodaclasseemailcom256caracteresparasertesteunitariodaclasseemailcom256caracteresparasertesteunitariodaclasseemailcom256caracteresparasertesteunitariodaclasseemailcom256caracteresparasertesteunitariodaclasseemailcom256";
    string emailComParteLocal64 = partelocal64 + "@email.com";
    string emailComParteLocal65 = partelocal65 + "@email.com";
    string emailComDominio255 = "email@" + dominio255;
    string emailComDominio256 = "email@" + dominio256;
    string email64e255 = partelocal64 + "@" + dominio255;
    string email65e255 = partelocal65 + "@" + dominio255;
    string email64e256 = partelocal64 + "@" + dominio256;
    Email email;
    email.setEmail("parte-local@domínio");

    //validacao parte local

    cout << "Validacao parte local" << endl;
    cout << "===========================" << endl;
    cout << endl;
    cout << "Validos" << endl;
    cout << endl;
    cout << "parte-local        " << email.validarParteLocal("parte-local") << endl;
    cout << "parte-local-1      " << email.validarParteLocal("parte-local-1") << endl;
    cout << "a-b-c-d-e-f-g      " << email.validarParteLocal("a-b-c-d-e-f-g") << endl;
    cout << "parte.local        " << email.validarParteLocal("parte.local") << endl;
    cout << "parte.local.1      " << email.validarParteLocal("parte.local.1") << endl;
    cout << "parte-local.1      " << email.validarParteLocal("parte-local.1") << endl;
    cout << "parte              " << email.validarParteLocal("parte") << endl;
    cout << "partelocal64       " << email.validarParteLocal(partelocal64) << endl;
    cout << endl;
    cout << "---------------------------" << endl;
    cout << endl;
    cout << "Invalidos" << endl;
    cout << endl;
    cout << "parte..local       " << email.validarParteLocal("parte..local") << endl;
    cout << "parte--local       " << email.validarParteLocal("parte--local") << endl;
    cout << "-local             " << email.validarParteLocal("-local") << endl;
    cout << "-local-email       " << email.validarParteLocal("-local-email") << endl;
    cout << "parte-             " << email.validarParteLocal("parte-") << endl;
    cout << "partelocal65       " << email.validarParteLocal(partelocal65) << endl;
    cout << endl;

    //validacao dominio (soh falta validar tamanho)

    cout << "Validacao dominio (soh falta validar tamanho)" << endl;
    cout << "===========================" << endl;
    cout << endl;
    cout << "Validos" << endl;
    cout << endl;
    cout << "dominio255         " << email.validarDominio(dominio255) << endl;
    cout << endl;
    cout << "---------------------------" << endl;
    cout << endl;
    cout << "Invalidos" << endl;
    cout << endl;
    cout << "dominio256         " << email.validarDominio(dominio256) << endl;
    cout << endl;

    //validacao email

    cout << "Validacao email" << endl;
    cout << "===========================" << endl;
    cout << endl;
    cout << "Validos" << endl;
    cout << endl;
    cout << "parte-local@ab     " << email.validarEmail("parte-local@ab") << endl;
    cout << "parte-local@ab.ab  " << email.validarEmail("parte-local@ab.ab") << endl;
    cout << "emailpartlocal64   " << email.validarEmail(emailComParteLocal64) << endl;
    cout << "email64e255        " << email.validarEmail(email64e255) << endl;
    cout << "emailComDominio255 " << email.validarEmail(emailComDominio255) << endl;
    cout << endl;
    cout << "---------------------------" << endl;
    cout << endl;
    cout << "Invalidos" << endl;
    cout << endl;
    cout << "parte-local@       " << email.validarEmail("parte-local@") << endl;
    cout << "parte-local@ab.    " << email.validarEmail("parte-local@ab.") << endl;
    cout << "emailpartlocal65   " << email.validarEmail(emailComParteLocal65) << endl;
    cout << "emailComDominio256 " << email.validarEmail(emailComDominio256) << endl;
    cout << "email65e255        " << email.validarEmail(email65e255) << endl;
    cout << "email64e256        " << email.validarEmail(email64e256) << endl;
    cout << endl;
}
