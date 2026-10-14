#ifndef IDENTIFICADOR_H
#define IDENTIFICADOR_H

#include <string>

/**
 * @brief Domínio Identificador: 6 caracteres, sendo os 3 primeiros letras
 * (a-z ou A-Z) e os 3 últimos dígitos (0-9).
 */
class Identificador {
private:
    std::string valor;
    static bool validar(const std::string& texto);

public:
    /// @throws std::invalid_argument se o formato for inválido.
    explicit Identificador(const std::string& valor);

    /// @throws std::invalid_argument se o formato for inválido.
    void setValor(const std::string& valor);

    std::string getValor() const;
};

#endif
