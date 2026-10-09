#include "tuentidades.hpp"



void TUCartaoDeAtividade::setUp() {
    cartaoDeAtividade = new CartaoDeAtividade();
    estado = SUCESSO;
}

void TUCartaoDeAtividade::tearDown() {
    delete cartaoDeAtividade;
}

void TUCartaoDeAtividade::testarCenarioIdentificador() {
    Identificador identificador;
    identificador.setIdentificador(VALOR_VALIDO_IDENTIFICADOR);
    cartaoDeAtividade->setIdentificador(identificador);
    if(cartaoDeAtividade->getIdentificador().getIdentificador() != VALOR_VALIDO_IDENTIFICADOR) estado = FALHA;
}

void TUCartaoDeAtividade::testarCenarioNome() {
    Nome nome;
    nome.setNome(VALOR_VALIDO_NOME);
    cartaoDeAtividade->setNome(nome);
    if(cartaoDeAtividade->getNome().getNome() != VALOR_VALIDO_NOME) estado = FALHA;
}

void TUCartaoDeAtividade::testarCenarioDescricao() {
    Texto descricao;
    descricao.setTexto(VALOR_VALIDO_DESCRICAO);
    cartaoDeAtividade->setDescricao(descricao);
    if(cartaoDeAtividade->getDescricao().getTexto() != VALOR_VALIDO_DESCRICAO) estado = FALHA;
}

void TUCartaoDeAtividade::testarCenarioPrioridade() {
    Prioridade prioridade;
    prioridade.setPrioridade(VALOR_VALIDO_PRIORIDADE);
    cartaoDeAtividade->setPrioridade(prioridade);
    if(cartaoDeAtividade->getPrioridade().getPrioridade() != VALOR_VALIDO_PRIORIDADE) estado = FALHA;
}

void TUCartaoDeAtividade::testarCenarioEstado() {
    Estado estadoCartao;
    estadoCartao.setEstado(VALOR_VALIDO_ESTADO);
    cartaoDeAtividade->setEstado(estadoCartao);
    if(cartaoDeAtividade->getEstado().getEstado() != VALOR_VALIDO_ESTADO) estado = FALHA;
}

void TUCartaoDeAtividade::testarCenarioTamanho() {
    Tamanho tamanho;
    tamanho.setTamanho(VALOR_VALIDO_TAMANHO);
    cartaoDeAtividade->setTamanho(tamanho);
    if(cartaoDeAtividade->getTamanho().getTamanho() != VALOR_VALIDO_TAMANHO) estado = FALHA;
}

void TUCartaoDeAtividade::testarCenarioEntrada() {
    Timestamp entrada;
    entrada.setTimestamp(VALOR_VALIDO_ENTRADA);
    cartaoDeAtividade->setEntrada(entrada);
    if(cartaoDeAtividade->getEntrada().getTimestamp() != VALOR_VALIDO_ENTRADA) estado = FALHA;
}

void TUCartaoDeAtividade::testarCenarioInicio() {
    Timestamp inicio;
    inicio.setTimestamp(VALOR_VALIDO_INICIO);
    cartaoDeAtividade->setInicio(inicio);
    if(cartaoDeAtividade->getInicio().getTimestamp() != VALOR_VALIDO_INICIO) estado = FALHA;
}

void TUCartaoDeAtividade::testarCenarioTermino() {
    Timestamp termino;
    termino.setTimestamp(VALOR_VALIDO_TERMINO);
    cartaoDeAtividade->setTermino(termino);
    if(cartaoDeAtividade->getTermino().getTimestamp() != VALOR_VALIDO_TERMINO) estado = FALHA;
}

int TUCartaoDeAtividade::run() {
    setUp();
    testarCenarioIdentificador();
    testarCenarioNome();
    testarCenarioDescricao();
    testarCenarioPrioridade();
    testarCenarioEstado();
    testarCenarioTamanho();
    testarCenarioEntrada();
    testarCenarioInicio();
    testarCenarioTermino();
    tearDown();
    return estado;
}
