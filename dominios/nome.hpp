#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED

#include "dominios.hpp"

class Nome {
private:
    string nome;
    void validar(string);
public:
    string getNome() const;
    void setNome(string);
};

inline string Nome::getNome() const {
    return nome;
}

#endif // NOME_HPP_INCLUDED
