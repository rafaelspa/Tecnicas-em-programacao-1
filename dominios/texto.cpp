#include "dominios.hpp"

Texto::Texto(string texto) {
    this->texto = texto;
};

void Texto::setTexto(string texto) {
    this->texto = texto;
};

bool Texto::validaTexto(){
    // validar se tem ateh 30 caracteres, letras, nums, pont, comecao por maiusc. termina com ponto e nao tem pontuacao dupla
    regex r("(?=^.{0,30}$)[A-Za-z0-9 .,;:?!]*$");
    regex s("(?=^.{0,30}$).*[.]$");
    regex t("(?=^.{0,30}$)^[A-Z].*$");
    regex u("[.,;:!?]{2,}");
    bool meio_texto = regex_match(this->texto, r) ? true : false;
    bool ponto_final = regex_match(this->texto, s) ? true : false;
    bool comeca_com_maiuscula = regex_match(this->texto, t) ? true : false;
    bool tem_pontuacao_dupla = regex_match(this->texto, u) ? true : false;
    return (meio_texto           &&
            ponto_final          &&
            comeca_com_maiuscula &&
            !tem_pontuacao_dupla)? true : false;
};
