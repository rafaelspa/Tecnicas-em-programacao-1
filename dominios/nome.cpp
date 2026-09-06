#include "dominios.hpp"

void Nome::setNome(string nome) {
    this->nome = nome;
};

Nome::Nome(string nome) {
    this->nome = nome;
};

bool Nome::validaNome() {
    regex r("(?=^.{1,15}$)([A-Za-z0-9]+[ ]?)+[^ ]");
    return (regex_match(this->nome, r)) ? true : false;
};
