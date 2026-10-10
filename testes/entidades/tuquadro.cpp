#include "tuentidades.hpp"


void TUQuadro::setUp() {
    quadro = new Quadro();
    estado = SUCESSO;
}

void TUQuadro::tearDown() {
    delete quadro;
}

void TUQuadro::testarCenarioIdentificador() {
    Identificador identificador;
    identificador.setIdentificador(VALOR_VALIDO_IDENTIFICADOR);
    quadro->setIdentificador(identificador);
    if(quadro->getIdentificador().getIdentificador() != VALOR_VALIDO_IDENTIFICADOR) estado = FALHA;
}

void TUQuadro::testarCenarioNome() {
    Nome nome;
    nome.setNome(VALOR_VALIDO_NOME);
    quadro->setNome(nome);
    if(quadro->getNome().getNome() != VALOR_VALIDO_NOME) estado = FALHA;
}

void TUQuadro::testarCenarioLimite() {
    Limite limite;
    limite.setLimite(VALOR_VALIDO_LIMITE);
    quadro->setLimite(limite);
    if(quadro->getLimite().getLimite() != VALOR_VALIDO_LIMITE) estado = FALHA;
}

int TUQuadro::run() {
    setUp();
    testarCenarioIdentificador();
    testarCenarioNome();
    testarCenarioLimite();
    tearDown();
    return estado;
}
