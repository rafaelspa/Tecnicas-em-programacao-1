#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED

class Senha {
private:
    string senha;
public:
    Senha(string);
    Senha();
    string getSenha();
    void setSenha(string);
    bool validaSenha();
};

inline string Senha::getSenha() {
    return senha;
};

#endif // SENHA_HPP_INCLUDED
