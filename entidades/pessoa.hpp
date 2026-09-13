#ifndef PESSOA_HPP_INCLUDED
#define PESSOA_HPP_INCLUDED

class Pessoa {
private:
    Email email;
    Nome nome;
    Senha senha;
    Papel papel;
public:
    Email getEmail() const;
    void setEmail(const Email);
    Nome getNome() const;
    void setNome(const Nome);
    Senha getSenha() const;
    void setSenha(const Senha);
    Papel getPapel() const;
    void setPapel(const Papel);
};

inline Email Pessoa::getEmail() const{
    return this->email;
};

inline void Pessoa::setEmail(const Email email) {
    this->email = email;
}

inline Nome Pessoa::getNome() const {
    return this->nome;
};

inline void Pessoa::setNome(const Nome nome) {
    this->nome = nome;
}

inline Senha Pessoa::getSenha() const {
    return this->senha;
};

inline void Pessoa::setSenha(const Senha senha) {
    this->senha = senha;
}

inline Papel Pessoa::getPapel() const {
    return this->papel;
};

inline void Pessoa::setPapel(const Papel papel) {
    this->papel = papel;
}

#endif // PESSOA_HPP_INCLUDED
