#ifndef TUPESSOA_HPP_INCLUDED
#define TUPESSOA_HPP_INCLUDED

class TUPessoa {
    private:
        Pessoa *pessoa;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioEmail();
        void testarCenarioNome();
        void testarCenarioSenha();
        void testarCenarioPapel();

    public:
        const string VALOR_VALIDO_EMAIL = "email@gmail.com";
        const string VALOR_VALIDO_NOME = "Nome valido";
        const string VALOR_VALIDO_SENHA = "ab1cd";
        const string VALOR_VALIDO_PAPEL = "gestor";
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

#endif // TUPESSOA_HPP_INCLUDED
