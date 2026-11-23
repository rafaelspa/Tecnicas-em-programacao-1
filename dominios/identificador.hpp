#ifndef IDENTIFICADOR_HPP_INCLUDED
#define IDENTIFICADOR_HPP_INCLUDED

/// Classe que implementa o dominio identificador

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
