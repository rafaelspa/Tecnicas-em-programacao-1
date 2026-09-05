#ifndef ESTADO_HPP_INCLUDED
#define ESTADO_HPP_INCLUDED

class Estado {
private:
    string estado;
public:
    const string A_FAZER = "a fazer";
    const string FAZENDO = "fazendo";
    const string FEITO = "feito";
    string getEstado();
    void setEstado(Estado);
};

inline string Estado::getEstado() {
    return this->estado;
}

#endif // ESTADO_HPP_INCLUDED
