#ifndef PAPEL_H
#define PAPEL_H

#include <string>

/**
 * @brief Domínio Papel de um membro do projeto.
 *
 * Valores válidos: GESTOR, DESENVOLVEDOR.
 */
class Papel {
public:
    enum Valor { GESTOR, DESENVOLVEDOR };

private:
    Valor valor;
    static bool validar(const std::string& texto);
    static Valor converterParaEnum(const std::string& texto);
    static std::string converterParaTexto(Valor valor);

public:
    /// @throws std::invalid_argument se o texto não for "GESTOR" ou "DESENVOLVEDOR".
    explicit Papel(const std::string& texto);
    explicit Papel(Valor valor);

    /// @throws std::invalid_argument se o texto não for "GESTOR" ou "DESENVOLVEDOR".
    void setValor(const std::string& texto);

    Valor getValor() const;
    std::string getTexto() const;
};

#endif
