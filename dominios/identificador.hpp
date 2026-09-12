#ifndef IDENTIFICADOR_HPP_INCLUDED
#define IDENTIFICADOR_HPP_INCLUDED

class Identificador {
private:
    string identificador;
    void validar(string);
public:
    string getIdentificador() const;
    void setIdentificador(string);
};

inline string Identificador::getIdentificador() const {
    return this->identificador;
}

#endif // IDENTIFICADOR_HPP_INCLUDED
