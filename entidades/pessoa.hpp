#ifndef PESSOA_HPP_INCLUDED
#define PESSOA_HPP_INCLUDED

class Pessoa {
private:
    Email email;
    Nome nome;
    Senha senha;
    Papel papel;
public:
    Pessoa(Email, Nome, Senha, Papel);
    Pessoa getPessoa();
    Email getEmail();
    Nome getNome();
    Senha getSenha();
    Papel getPapel();
    void setNome(Nome);
    void setSenha(Senha);
    void setPapel(Papel);
};

inline Email Pessoa::getEmail(){
    return this->email;
};

inline Nome Pessoa::getNome(){
    return this->nome;
};

inline Senha Pessoa::getSenha(){
    return this->senha;
};

inline Papel Pessoa::getPapel(){
    return this->papel;
};

#endif // PESSOA_HPP_INCLUDED
