#ifndef NOME_H
#define NOME_H

#include <string>

/**
 * @brief Domínio Nome: texto com até 15 caracteres (letras maiúsculas,
 * minúsculas ou espaço em branco). Espaço deve ser seguido de letra;
 * primeiro e último caractere não podem ser espaço.
 */
class Nome {
private:
    std::string valor;
    static bool validar(const std::string& texto);

public:
    /// @throws std::invalid_argument se o formato for inválido.
    explicit Nome(const std::string& valor);

    /// @throws std::invalid_argument se o formato for inválido.
    void setValor(const std::string& valor);

    std::string getValor() const;
};

#endif
