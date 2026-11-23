#ifndef LIMITE_HPP_INCLUDED
#define LIMITE_HPP_INCLUDED

/// Classe que implementa o dominio limite

class Limite {
private:
    int limiteMinimo = 1;
    int limiteMaximo = 25;
    int limite;
    void validar(int);
public:
    int getLimite() const;
    void setLimite(int);
};

inline int Limite::getLimite() const {
    return limite;
};

#endif // LIMITE_HPP_INCLUDED
