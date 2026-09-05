#include "dominios.hpp"

bool Identificador::validaIdentificador(string identificador) {
    regex r("(?=^.{6}$)([A-Za-z]{3}[0-9]{3})");
    return (regex_match(identificador, r)) ? true : false;
}
