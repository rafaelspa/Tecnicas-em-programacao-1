#ifndef LIMITE_HPP_INCLUDED
#define LIMITE_HPP_INCLUDED

class Limite {
private:
    int const limiteMinimo = 1;
    int const limiteMaximo = 25;
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
