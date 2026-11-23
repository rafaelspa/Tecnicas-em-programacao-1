#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED

/// Classe que implementa o dominio senha

class Senha {
private:
    string senha;
    void validar(string);
public:
    string getSenha() const;
    void setSenha(string);
};

inline string Senha::getSenha() const {
    return senha;
};

#endif // SENHA_HPP_INCLUDED
