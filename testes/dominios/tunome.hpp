#ifndef TUNOME_HPP_INCLUDED
#define TUNOME_HPP_INCLUDED

class TUNome {
private:
    Nome *nome;
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

#endif // TUNOME_HPP_INCLUDED
