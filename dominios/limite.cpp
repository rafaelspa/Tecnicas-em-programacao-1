#include "dominios.hpp"

bool Limite::validaLimite(int valor) {
    if (valor >= limiteMinimo && valor <= limiteMaximo)
        return true;
    return false;
};
