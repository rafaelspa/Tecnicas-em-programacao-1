#include "dominios.hpp"

Senha::Senha(string senha) {
    this->senha = senha;
};

void Senha::setSenha(string senha) {
    this->senha = senha;
};

bool Senha::validaSenha() {
    // validar se tem pelo menos 1 uma letra e 1 numero, ambas as formas (letra+num ou num+letra) sao validas
    regex r("(?=^.{5}$)[A-Za-z]+[0-9]+");
    regex s("(?=^.{5}$)[0-9]+[A-Za-z]+");
    bool teste_a_esquerda = regex_match(this->senha, r);
    bool teste_a_direita = regex_match(this->senha, s);
    return (teste_a_esquerda || teste_a_direita) ? true : false;
};
