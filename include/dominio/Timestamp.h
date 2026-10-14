#ifndef TIMESTAMP_H
#define TIMESTAMP_H

#include <string>

/**
 * @brief Domínio Timestamp, no formato DIA-MES-ANO-HORARIO
 * (ex: "5-JAN-2024-14:30").
 *
 * DIA: 1 a 31 (validado conforme o mês e ano, incluindo anos bissextos).
 * MES: JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV ou DEZ.
 * ANO: 2000 a 2099.
 * HORARIO: 00:00 a 23:59.
 */
class Timestamp {
private:
    std::string valor; ///< Valor original validado, ex: "5-JAN-2024-14:30".
    int dia;
    int mes;    ///< 1 (JAN) a 12 (DEZ)
    int ano;
    int hora;
    int minuto;

    /// @brief Tenta decompor e validar o texto. Preenche os campos por referência.
    static bool validar(const std::string& texto, int& dia, int& mes, int& ano, int& hora, int& minuto);
    static bool ehBissexto(int ano);
    static int diasNoMes(int mes, int ano);

public:
    /// @throws std::invalid_argument se o formato ou a data/hora forem inválidos.
    explicit Timestamp(const std::string& valor);

    /// @throws std::invalid_argument se o formato ou a data/hora forem inválidos.
    void setValor(const std::string& valor);

    /// @brief Obtém o valor original, ex: "5-JAN-2024-14:30".
    std::string getValor() const;

    int getDia() const;
    int getMes() const;   ///< 1 (JAN) a 12 (DEZ)
    int getAno() const;
    int getHora() const;
    int getMinuto() const;

    /**
     * @brief Converte o timestamp para minutos absolutos desde 01-JAN-2000-00:00.
     *
     * Útil para calcular diferenças de tempo (tempo de ciclo, lead time etc.)
     * na camada de serviço, sem precisar reimplementar a lógica de datas.
     */
    long paraMinutosAbsolutos() const;
};

#endif
