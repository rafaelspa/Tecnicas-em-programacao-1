#ifndef IDENTIFICADOR_HPP_INCLUDED
#define IDENTIFICADOR_HPP_INCLUDED

class Identificador {
private:
    string identificador;
public:
    string getIdentificador();
    bool static validaIdentificador(string);
    void setIdentificador(string);
};

inline string Identificador::getIdentificador(){
    return this->identificador;
}

#endif // IDENTIFICADOR_HPP_INCLUDED
