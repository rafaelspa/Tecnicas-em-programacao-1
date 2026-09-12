#include "dominios.hpp"

void Senha::validar(string senha) {
    // validar se tem pelo menos 1 uma letra e 1 numero, ambas as formas (letra+num ou num+letra) sao validas
    regex r("(?=^.{5}$)[A-Za-z]+[0-9]+");
    regex s("(?=^.{5}$)[0-9]+[A-Za-z]+");
    bool letraENumeroAEsquerda = regex_match(senha, r);
    bool letraENumeroADireita = regex_match(senha, s);
    if (letraENumeroAEsquerda || letraENumeroADireita) // soh 1 deles precisa estar certo
        return;
    throw invalid_argument("Senha invalida");
};


void Senha::setSenha(string senha) {
    try {
        validar(senha);
        this->senha = senha;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}
