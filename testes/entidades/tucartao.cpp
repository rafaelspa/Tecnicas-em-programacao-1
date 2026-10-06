#include "tuentidades.hpp"

void TUCartaoDeAtividade::setUp() {
    cartaoDeAtividade = new CartaoDeAtividade();
    estado = SUCESSO;
}

void TUCartaoDeAtividade::tearDown() {
    delete cartaoDeAtividade;
}

void TUCartaoDeAtividade::testarCenario() {

    Identificador identificador;
    identificador.setIdentificador("abc123");
    cartaoDeAtividade->setIdentificador(identificador);
    if(cartaoDeAtividade->getIdentificador().getIdentificador() != "abc123") estado = FALHA;

    Nome nome;
    nome.setNome("Nome valido");
    cartaoDeAtividade->setNome(nome);
    if(cartaoDeAtividade->getNome().getNome() != "Nome valido") estado = FALHA;


}

int TUCartaoDeAtividade::run() {
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
