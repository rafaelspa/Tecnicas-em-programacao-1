#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Refatorando dominios: email" << endl;

    Email email;

    cout << "Seta email \"email@valido.com\"" << endl;
    email.setEmail("email@valido.com");
    cout << "Email " + email.getEmail() + " setado" << endl;
    cout << "Seta email \"a\"" << endl;
    email.setEmail("a");

    return 0;
}
