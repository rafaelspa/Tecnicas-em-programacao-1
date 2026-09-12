#ifndef ESTADO_HPP_INCLUDED
#define ESTADO_HPP_INCLUDED

class Estado {
private:
    string estado;
    void validar(string);
public:
    inline static const std::string A_FAZER = "A FAZER";
    inline static const std::string FAZENDO = "fazendo";
    inline static const std::string FEITO = "feito";
    string getEstado() const;
    void setEstado(string);
};

inline string Estado::getEstado() const {
    return this->estado;
}

#endif // ESTADO_HPP_INCLUDED
