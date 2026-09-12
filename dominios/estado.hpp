#ifndef ESTADO_HPP_INCLUDED
#define ESTADO_HPP_INCLUDED

class Estado {
private:
    string estado;
    void validar(string);
public:
    const string A_FAZER = "a fazer";
    const string FAZENDO = "fazendo";
    const string FEITO = "feito";
    string getEstado() const;
    void setEstado(Estado);
};

inline string Estado::getEstado() const {
    return this->estado;
}

#endif // ESTADO_HPP_INCLUDED
