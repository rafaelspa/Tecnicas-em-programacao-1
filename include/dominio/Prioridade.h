#ifndef PRIORIDADE_H
#define PRIORIDADE_H

#include <string>

/**
 * @brief Domínio Prioridade de um cartão de atividade.
 *
 * Valores válidos: ALTA, MEDIA, BAIXA.
 */
class Prioridade {
public:
    enum Valor { ALTA, MEDIA, BAIXA };

private:
    Valor valor;
    static bool validar(const std::string& texto);
    static Valor converterParaEnum(const std::string& texto);
    static std::string converterParaTexto(Valor valor);

public:
    /// @throws std::invalid_argument se o texto não for "ALTA", "MEDIA" ou "BAIXA".
    explicit Prioridade(const std::string& texto);
    explicit Prioridade(Valor valor);

    void setValor(const std::string& texto);
    Valor getValor() const;
    std::string getTexto() const;
};

#endif
