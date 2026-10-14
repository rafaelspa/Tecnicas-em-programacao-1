#ifndef TEXTO_H
#define TEXTO_H

#include <string>

/**
 * @brief Domínio Texto: até 30 caracteres (letra, dígito, espaço ou sinal
 * de pontuação: , ; . : ? !). Sinal de pontuação não pode ser seguido de
 * outro sinal de pontuação. Primeiro caractere é letra maiúscula e o
 * último caractere é ponto final.
 */
class Texto {
private:
    std::string valor;
    static bool validar(const std::string& texto);

public:
    /// @throws std::invalid_argument se o formato for inválido.
    explicit Texto(const std::string& valor);

    /// @throws std::invalid_argument se o formato for inválido.
    void setValor(const std::string& valor);

    std::string getValor() const;
};

#endif
