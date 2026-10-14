#ifndef SENHA_H
#define SENHA_H

#include <string>

/**
 * @brief Domínio Senha: 5 caracteres (letra ou dígito), contendo pelo
 * menos uma letra e um dígito.
 */
class Senha {
private:
    std::string valor;
    static bool validar(const std::string& texto);

public:
    /// @throws std::invalid_argument se o formato for inválido.
    explicit Senha(const std::string& valor);

    /// @throws std::invalid_argument se o formato for inválido.
    void setValor(const std::string& valor);

    std::string getValor() const;
};

#endif
