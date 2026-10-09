#include "tuentidades.hpp"


void TUPessoa::setUp() {
    pessoa = new Pessoa();
    estado = SUCESSO;
}

void TUPessoa::tearDown() {
    delete pessoa;
}

void TUPessoa::testarCenarioEmail() {
    Email email;
    email.setEmail(VALOR_VALIDO_EMAIL);
    pessoa->setEmail(email);
    if(pessoa->getEmail().getEmail() != VALOR_VALIDO_EMAIL) estado = FALHA;
}

void TUPessoa::testarCenarioNome() {
    Nome nome;
    nome.setNome(VALOR_VALIDO_NOME);
    pessoa->setNome(nome);
    if(pessoa->getNome().getNome() != VALOR_VALIDO_NOME) estado = FALHA;
}

void TUPessoa::testarCenarioSenha() {
    Senha senha;
    senha.setSenha(VALOR_VALIDO_SENHA);
    pessoa->setSenha(senha);
    if(pessoa->getSenha().getSenha() != VALOR_VALIDO_SENHA) estado = FALHA;
}

void TUPessoa::testarCenarioPapel() {
    Papel papel;
    papel.setPapel(VALOR_VALIDO_PAPEL);
    pessoa->setPapel(papel);
    if(pessoa->getPapel().getPapel() != VALOR_VALIDO_PAPEL) estado = FALHA;
}

int TUPessoa::run() {
    setUp();
    testarCenarioEmail();
    testarCenarioNome();
    testarCenarioSenha();
    testarCenarioPapel();
    tearDown();
    return estado;
}
