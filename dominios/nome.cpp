#include "dominios.hpp"

void Nome::setNome(string nome) {
    try {
        validar(nome);
        this->nome = nome;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
};

void Nome::validar(string nome) {
    regex r("(?=^.{1,15}$)^[A-Za-z][A-Za-z ]+[A-Za-z]$");
    if(regex_match(nome, r)) {
        return;
    }
    throw invalid_argument("Nome invalido");
};
