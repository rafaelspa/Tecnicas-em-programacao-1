#ifndef LIMITE_HPP_INCLUDED
#define LIMITE_HPP_INCLUDED

class Limite {
private:
    int const limiteMinimo = 1;
    int const limiteMaximo = 25;
public:
    int getLimiteMinimo();
    int getLimiteMaximo();
    bool validaLimite(int);
};

inline int Limite::getLimiteMinimo() {
    return limiteMinimo;
};

inline int Limite::getLimiteMaximo() {
    return limiteMaximo;
};

#endif // LIMITE_HPP_INCLUDED
