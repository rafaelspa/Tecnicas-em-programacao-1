#ifndef ESTADO_H
#define ESTADO_H

#include <string>

/**
 * @brief Domínio Estado do cartão de atividade no quadro Kanban.
 *
 * Valores válidos: A FAZER, FAZENDO, FEITO (correspondem às colunas do quadro).
 */
class Estado {
public:
    /// Valores possíveis do domínio Estado.
    enum Valor { A_FAZER, FAZENDO, FEITO };

private:
    Valor valor;

    static bool validar(const std::string& texto);
    static Valor converterParaEnum(const std::string& texto);
    static std::string converterParaTexto(Valor valor);

public:
    /**
     * @brief Constrói um Estado a partir de texto.
     * @param texto "A FAZER", "FAZENDO" ou "FEITO".
     * @throws std::invalid_argument se o texto não for um estado válido.
     */
    explicit Estado(const std::string& texto);

    /// @brief Constrói um Estado a partir de um valor do enum.
    explicit Estado(Valor valor);

    /**
     * @brief Define o valor do estado a partir de texto.
     * @throws std::invalid_argument se o texto não for um estado válido.
     */
    void setValor(const std::string& texto);

    /// @brief Obtém o valor do estado como enum.
    Valor getValor() const;

    /// @brief Obtém o valor do estado como texto.
    std::string getTexto() const;
};

#endif
