#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED

#include "dominios.hpp"

class Nome {
private:
    string nome;
public:
    Nome(string);
    string getNome();
    void setNome(string);
    bool validaNome();
};

inline string Nome::getNome() {
    return nome;
}


#endif // NOME_HPP_INCLUDED
