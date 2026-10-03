#ifndef TULIMITE_HPP_INCLUDED
#define TULIMITE_HPP_INCLUDED

class TULimite {
private:
    Limite *limite;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    const static int VALOR_VALIDO = 3;
    const static int VALOR_INVALIDO = 100;

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif // TULIMITE_HPP_INCLUDED
