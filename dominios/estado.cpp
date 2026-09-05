#include "dominios.hpp"

void Estado::setEstado(Estado estado) {
    if (estado.getEstado() == estado.A_FAZER) {
        this->estado = estado.FAZENDO;
    } else if (estado.getEstado() == estado.FAZENDO) {
        this->estado = estado.FEITO;
    }
}
