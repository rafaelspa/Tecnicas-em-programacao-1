#ifndef TUSENHA_HPP_INCLUDED
#define TUSENHA_HPP_INCLUDED

class TUSenha {
private:
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


#endif // TUSENHA_HPP_INCLUDED
