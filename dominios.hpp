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

#endif // DOMINIOS_HPP_INCLUDED
