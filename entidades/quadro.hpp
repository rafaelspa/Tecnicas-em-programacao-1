#ifndef QUADRO_HPP_INCLUDED
#define QUADRO_HPP_INCLUDED

class Quadro {
private:
    Identificador identificador;
    Nome nome;
    Limite limite;
public:
    Identificador getIdentificador() const;
    void setIdentificador(const Identificador);
    Nome getNome() const;
    void setNome(const Nome);
    Limite getLimite() const;
    void setLimite(const Limite);
};

inline Identificador Quadro::getIdentificador() const {
    return identificador;
};

inline void Quadro::setIdentificador(const Identificador identificador) {
    this->identificador = identificador;
};

inline Nome Quadro::getNome() const {
    return nome;
};

inline void Quadro::setNome(const Nome nome) {
    this->nome = nome;
};

inline Limite Quadro::getLimite() const {
    return limite;
};

inline void Quadro::setLimite(Limite limite) {
    this->limite = limite;
};

#endif // QUADRO_HPP_INCLUDED
