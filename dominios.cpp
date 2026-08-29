#include "dominios.hpp"
#include <string>
#include <regex>



void Email::setEmail(string email) {
    this->email = email;
}

bool Email::validarParteLocal(string email) {
    regex r("(?=^.{1,64}$)([A-Za-z0-9]+[.-]?)+[^.-]");
    return (regex_match(email, r)) ? true : false;
}

bool Email::validarDominio(string email) {
    regex r("(?=^.{1,255}$)([A-Za-z0-9]+[.-]?)+[^.-]");
    return (regex_match(email, r)) ? true : false;
}

bool Email::validarEmail(string email) {
    size_t pos = email.find("@");
    size_t rpos = email.rfind("@");

    // valida se tem @. Como pos fica com 18446744073709551615 e
    // como a parte local do email soh pode ateh 64, entao valida-se com 1 a mais
    // essa validacao funciona como validacao de tamanho tambem
    if (pos >= 65 || rpos >= 256) { return false; }
    // valida se tem @ no inicio da string
    if (pos == 0) { return false; }
    // valida se tem @ no fim da string
    if (pos == email.length()) { return false; }
    // valida se tem mais que um @ na string
    if (pos != rpos){ return false; }

    // separa o email em parte local e dominio
    string pl = email.substr(0,pos);
    string d = email.substr(pos+1,email.length());

    // se as duas validacoes estiverem ok, o email esta ok
    if (Email::validarParteLocal(pl) && Email::validarDominio(d))
        return true;
    return false;
}

void Estado::setEstado(Estado estado) {
    if (estado.getEstado() == estado.A_FAZER) {
        this->estado = estado.FAZENDO;
    } else if (estado.getEstado() == estado.FAZENDO) {
        this->estado = estado.FEITO;
    }
}

bool Identificador::validaIdentificador(string identificador) {
    regex r("(?=^.{6}$)([A-Za-z]{3}[0-9]{3})");
    return (regex_match(identificador, r)) ? true : false;
}
