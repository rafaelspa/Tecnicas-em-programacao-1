#ifndef TAMANHO_H
#define TAMANHO_H

#include <string>

/**
 * @brief Domínio Tamanho de um cartão de atividade.
 *
 * Valores válidos: GRANDE, MEDIO, PEQUENO.
 */
class Tamanho {
public:
    enum Valor { GRANDE, MEDIO, PEQUENO };

private:
    Valor valor;
    static bool validar(const std::string& texto);
    static Valor converterParaEnum(const std::string& texto);
    static std::string converterParaTexto(Valor valor);

public:
    /// @throws std::invalid_argument se o texto não for "GRANDE", "MEDIO" ou "PEQUENO".
    explicit Tamanho(const std::string& texto);
    explicit Tamanho(Valor valor);

    void setValor(const std::string& texto);
    Valor getValor() const;
    std::string getTexto() const;
};

#endif
