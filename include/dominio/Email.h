#ifndef EMAIL_H
#define EMAIL_H

#include <string>

/**
 * @brief Domínio EMAIL, no formato parte-local@dominio.
 *
 * Garante que o valor armazenado seja sempre um endereço de email válido,
 * segundo as regras: parte local com até 64 caracteres (letras a-z, dígitos
 * e '.'/'-', nunca no início/fim, e sempre seguidos de letra ou dígito) e
 * domínio com até 255 caracteres (partes separadas por '.', cada uma com
 * letras a-z, dígitos e '-', nunca no início/fim da parte).
 */
class Email {
private:
    std::string valor; ///< Valor validado do email.

    /// @brief Verifica se o texto está no formato válido de EMAIL.
    static bool validar(const std::string& texto);

public:
    /**
     * @brief Constrói um Email a partir de uma string.
     * @param valor Texto no formato parte-local@dominio.
     * @throws std::invalid_argument se o formato for inválido.
     */
    explicit Email(const std::string& valor);

    /**
     * @brief Define o valor do email.
     * @throws std::invalid_argument se o formato for inválido.
     */
    void setValor(const std::string& valor);

    /// @brief Obtém o valor atual do email.
    std::string getValor() const;
};

#endif
