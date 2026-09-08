#include "entidades.hpp"

Pessoa::Pessoa(Email email, Nome nome, Senha senha, Papel papel) {
    this->email = email;
    this->nome = nome;
    this->senha = senha;
    this->papel.setPapel(papel.getPapel());
}

void Pessoa::setNome(Nome nome) {
    this->nome = nome;
}

void Pessoa::setSenha(Senha senha) {
    this->senha = senha;
}

void Pessoa::setPapel(Papel papel) {
    this->papel.setPapel(papel.getPapel());
}
