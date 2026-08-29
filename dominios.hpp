#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <string>
using namespace std;

class Email {
private:
    string email;
public:
    bool validarParteLocal(string);
    bool validarDominio(string);
    bool validarEmail(string);
    string getEmail();
    void setEmail(string);
};

inline string Email::getEmail() {
    return this->email;
}

class Estado {
private:
    string estado = A_FAZER;
public:
    string const static A_FAZER = "a fazer";
    string const static FAZENDO = "fazendo";
    string const static FEITO = "feito";
    string getEstado();
    void setEstado(string);
};

inline string Estado::getEstado() {
    return this->estado;
}

#endif // DOMINIOS_HPP_INCLUDED
