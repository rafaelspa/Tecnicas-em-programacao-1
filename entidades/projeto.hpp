#ifndef PROJETO_HPP_INCLUDED
#define PROJETO_HPP_INCLUDED

class Projeto {
private:
    Identificador identificador;
    Nome nome;
    Texto descricao;
    Timestamp inicio;
    Timestamp termino;
public:
    Identificador getIdentificador() const;
    void setIdentificador(const Identificador);
    Nome getNome() const;
    void setNome(const Nome);
    Texto getDescricao() const;
    void setDescricao(const Texto);
    Timestamp getInicio() const;
    void setInicio(const Timestamp);
    Timestamp getTermino() const;
    void setTermino(const Timestamp);
};

inline Identificador Projeto::getIdentificador() const {
    return identificador;
}

inline void Projeto::setIdentificador(const Identificador identificador) {
    this->identificador = identificador;
}

inline Nome Projeto::getNome() const {
    return nome;
}

inline void Projeto::setNome(const Nome nome) {
    this->nome = nome;
}

inline Texto Projeto::getDescricao() const {
    return descricao;
}

inline void Projeto::setDescricao(const Texto descricao) {
    this->descricao = descricao;
}

inline Timestamp Projeto::getInicio() const {
    return inicio;
}

inline void Projeto::setInicio(const Timestamp inicio) {
    this->inicio = inicio;
}

inline Timestamp Projeto::getTermino() const {
    return termino;
}

inline void Projeto::setTermino(const Timestamp termino) {
    this->termino = termino;
}

#endif // PROJETO_HPP_INCLUDED
