#ifndef CARTAO_HPP_INCLUDED
#define CARTAO_HPP_INCLUDED


class CartaoDeAtividade {
private:
    Identificador identificador;
    Nome nome;
    Texto descricao;
    Prioridade prioridade;
    Estado estado;
    Tamanho tamanho;
    Timestamp entrada;
    Timestamp inicio;
    Timestamp termino;
public:
    Identificador getIdentificador() const;
    void setIdentificador(const Identificador);
    Nome getNome() const;
    void setNome(const Nome);
    Texto getDescricao() const;
    void setDescricao(const Texto);
    Prioridade getPrioridade() const;
    void setPrioridade(const Prioridade);
    Estado getEstado() const;
    void setEstado(const Estado);
    Tamanho getTamanho() const;
    void setTamanho(const Tamanho);
    Timestamp getEntrada() const;
    void setEntrada(const Timestamp);
    Timestamp getInicio() const;
    void setInicio(const Timestamp);
    Timestamp getTermino() const;
    void setTermino(const Timestamp);
};

inline Identificador CartaoDeAtividade::getIdentificador() const {
    return identificador;
}

inline void CartaoDeAtividade::setIdentificador(const Identificador identificador) {
    this->identificador = identificador;
}

inline Nome CartaoDeAtividade::getNome() const {
    return nome;
}

inline void CartaoDeAtividade::setNome(const Nome nome) {
    this->nome = nome;
}

inline Texto CartaoDeAtividade::getDescricao() const {
    return descricao;
}

inline void CartaoDeAtividade::setDescricao(const Texto descricao) {
    this->descricao = descricao;
}

inline Prioridade CartaoDeAtividade::getPrioridade() const {
    return prioridade;
}

inline void CartaoDeAtividade::setPrioridade(const Prioridade prioridade) {
    this->prioridade = prioridade;
}

inline Estado CartaoDeAtividade::getEstado() const {
    return estado;
}

inline void CartaoDeAtividade::setEstado(const Estado estado) {
    this->estado = estado;
}

inline Tamanho CartaoDeAtividade::getTamanho() const {
    return tamanho;
}

inline void CartaoDeAtividade::setTamanho(const Tamanho tamanho) {
    this->tamanho = tamanho;
}

inline Timestamp CartaoDeAtividade::getEntrada() const {
    return entrada;
}

inline void CartaoDeAtividade::setEntrada(const Timestamp entrada) {
    this->entrada = entrada;
}

inline Timestamp CartaoDeAtividade::getInicio() const {
    return inicio;
}

inline void CartaoDeAtividade::setInicio(const Timestamp inicio) {
    this->inicio = inicio;
}

inline Timestamp CartaoDeAtividade::getTermino() const {
    return termino;
}

inline void CartaoDeAtividade::setTermino(const Timestamp termino) {
    this->termino = termino;
}



#endif // CARTAO_HPP_INCLUDED
