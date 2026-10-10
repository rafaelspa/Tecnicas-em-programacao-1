#include "tuentidades.hpp"


void TUProjeto::setUp() {
    projeto = new Projeto();
    estado = SUCESSO;
}

void TUProjeto::tearDown() {
    delete projeto;
}

void TUProjeto::testarCenarioIdentificador() {
    Identificador identificador;
    identificador.setIdentificador(VALOR_VALIDO_IDENTIFICADOR);
    projeto->setIdentificador(identificador);
    if(projeto->getIdentificador().getIdentificador() != VALOR_VALIDO_IDENTIFICADOR) estado = FALHA;
}

void TUProjeto::testarCenarioNome() {
    Nome nome;
    nome.setNome(VALOR_VALIDO_NOME);
    projeto->setNome(nome);
    if(projeto->getNome().getNome() != VALOR_VALIDO_NOME) estado = FALHA;
}

void TUProjeto::testarCenarioDescricao() {
    Texto descricao;
    descricao.setTexto(VALOR_VALIDO_DESCRICAO);
    projeto->setDescricao(descricao);
    if(projeto->getDescricao().getTexto() != VALOR_VALIDO_DESCRICAO) estado = FALHA;
}

void TUProjeto::testarCenarioInicio() {
    Timestamp inicio;
    inicio.setTimestamp(VALOR_VALIDO_INICIO);
    projeto->setInicio(inicio);
    if(projeto->getInicio().getTimestamp() != VALOR_VALIDO_INICIO) estado = FALHA;
}

void TUProjeto::testarCenarioTermino() {
    Timestamp termino;
    termino.setTimestamp(VALOR_VALIDO_TERMINO);
    projeto->setTermino(termino);
    if(projeto->getTermino().getTimestamp() != VALOR_VALIDO_TERMINO) estado = FALHA;
}

int TUProjeto::run() {
    setUp();
    testarCenarioIdentificador();
    testarCenarioNome();
    testarCenarioDescricao();
    testarCenarioInicio();
    testarCenarioTermino();
    tearDown();
    return estado;
}
