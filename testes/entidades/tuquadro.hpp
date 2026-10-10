#ifndef TUQUADRO_HPP_INCLUDED
#define TUQUADRO_HPP_INCLUDED

class TUQuadro {
    private:
        Quadro *quadro;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioIdentificador();
        void testarCenarioNome();
        void testarCenarioLimite();
        const int VALOR_VALIDO_LIMITE = 12;

    public:
        const string VALOR_VALIDO_IDENTIFICADOR = "abc123";
        const string VALOR_VALIDO_NOME = "Nome valido";
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};


#endif // TUQUADRO_HPP_INCLUDED
