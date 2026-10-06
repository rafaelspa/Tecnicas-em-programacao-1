#include "tuentidades.hpp"

void TUEntidade::setUp() {
    entidade = new Entidade();
    estado = SUCESSO;
}

void TUEntidade::tearDown() {
    delete entidade;
}

void TUEntidade::testarCenario() {

    Dominio dominio;

    dominio.setvalor(VALOR_VALIDO);
    entidade->setNomeAtributo(dominio);
    if(entidade->getNomeAtributo().getValor() != VALOR_VALIDO)
    estado = FALHA;
}

int TUEntidade::run() {
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
