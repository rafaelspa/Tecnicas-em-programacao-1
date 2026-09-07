#ifndef TEXTO_HPP_INCLUDED
#define TEXTO_HPP_INCLUDED

class Texto {
private:
    string texto;
public:
    Texto(string);
    string getTexto();
    void setTexto(string);
    bool validaTexto();
};

inline string Texto::getTexto() {
    return this->texto;
};

#endif // TEXTO_HPP_INCLUDED
