#ifndef TUCARTAO_HPP_INCLUDED
#define TUCARTAO_HPP_INCLUDED

#include "../../dominios/dominios.hpp"
#include "../../entidades/entidades.hpp"

class TUCartaoDeAtividade {
    private:
        CartaoDeAtividade *cartaoDeAtividade;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioIdentificador();
        void testarCenarioNome();
        void testarCenarioDescricao();
        void testarCenarioPrioridade();
        void testarCenarioEstado();
        void testarCenarioTamanho();
        void testarCenarioEntrada();
        void testarCenarioInicio();
        void testarCenarioTermino();
    public:
        const string VALOR_VALIDO_IDENTIFICADOR = "abc123";
        const string VALOR_VALIDO_NOME = "Nome valido";
        const string VALOR_VALIDO_DESCRICAO = "Descricao";
        const string VALOR_VALIDO_PRIORIDADE = "alta";
        const string VALOR_VALIDO_ESTADO = "a fazer";
        const string VALOR_VALIDO_TAMANHO = "grande";
        const string VALOR_VALIDO_ENTRADA = "31-DEZ-2012-10:20";
        const string VALOR_VALIDO_INICIO = "31-DEZ-2012-10:20";
        const string VALOR_VALIDO_TERMINO = "31-DEZ-2012-10:20";

        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


// Define the static member outside the class






#endif // TUCARTAO_HPP_INCLUDED
