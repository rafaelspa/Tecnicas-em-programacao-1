#ifndef LIMITE_H
#define LIMITE_H

/**
 * @brief Domínio Limite: valor inteiro entre 1 e 25 (limite de WIP de um quadro).
 */
class Limite {
private:
    int valor;
    static bool validar(int valor);

public:
    /// @throws std::invalid_argument se o valor não estiver entre 1 e 25.
    explicit Limite(int valor);

    /// @throws std::invalid_argument se o valor não estiver entre 1 e 25.
    void setValor(int valor);

    int getValor() const;
};

#endif
