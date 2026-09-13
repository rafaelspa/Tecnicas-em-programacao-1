#include "dominios.hpp"

void Texto::validar(string texto){
    // validar se tem ateh 30 caracteres, letras, nums, pont, comecao por maiusc. termina com ponto e nao tem pontuacao dupla
    regex r("(?=^.{0,30}$)[A-Za-z0-9 .,;:?!]*$");
    regex s("(?=^.{0,30}$).*[.]$");
    regex t("(?=^.{0,30}$)^[A-Z].*$");
    regex u("[.,;:!?]{2,}");
    bool meio_texto = regex_match(texto, r) ? true : false;
    bool ponto_final = regex_match(texto, s) ? true : false;
    bool comeca_com_maiuscula = regex_match(texto, t) ? true : false;
    bool tem_pontuacao_dupla = regex_match(texto, u) ? true : false;
    if (meio_texto           &&
        ponto_final          &&
        comeca_com_maiuscula &&
        !tem_pontuacao_dupla) {
        return;
    };
    throw invalid_argument("Texto invalido");
};


void Texto::setTexto(string texto) {
    try {
        validar(texto);
        this->texto = texto;
    } catch (exception& e) {
        cout << e.what() << endl;
    }

}
