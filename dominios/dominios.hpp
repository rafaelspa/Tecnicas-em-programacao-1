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
    string estado;
public:
    const string A_FAZER = "a fazer";
    const string FAZENDO = "fazendo";
    const string FEITO = "feito";
    string getEstado();
    void setEstado(Estado);
};

inline string Estado::getEstado() {
    return this->estado;
}

class Identificador {
private:
    string identificador;
public:
    string getIdentificador();
    bool static validaIdentificador(string);
    void setIdentificador(string);
};

inline string Identificador::getIdentificador(){
    return this->identificador;
}

#endif // DOMINIOS_HPP_INCLUDED
