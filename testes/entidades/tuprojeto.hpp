#ifndef TUPROJETO_HPP_INCLUDED
#define TUPROJETO_HPP_INCLUDED

class TUProjeto {
    private:
        Projeto *projeto;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioIdentificador();
        void testarCenarioNome();
        void testarCenarioDescricao();
        void testarCenarioInicio();
        void testarCenarioTermino();

    public:
        const string VALOR_VALIDO_IDENTIFICADOR = "abc123";
        const string VALOR_VALIDO_NOME = "Nome valido";
        const string VALOR_VALIDO_DESCRICAO = "Descricao valida.";
        const string VALOR_VALIDO_INICIO = "31-DEZ-2012-10:20";
        const string VALOR_VALIDO_TERMINO = "31-DEZ-2012-10:20";
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


#endif // TUPROJETO_HPP_INCLUDED
