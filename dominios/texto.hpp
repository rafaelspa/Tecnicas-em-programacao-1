#ifndef TEXTO_HPP_INCLUDED
#define TEXTO_HPP_INCLUDED

class Texto {
private:
    string texto;
    void validar(string);
public:
    string getTexto() const;
    void setTexto(string);
};

inline string Texto::getTexto() const {
    return this->texto;
};

#endif // TEXTO_HPP_INCLUDED
