#ifndef TUTIMESTAMP_HPP_INCLUDED
#define TUTIMESTAMP_HPP_INCLUDED

class TUTimestamp {
private:
    Timestamp *timestamp;
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

#endif // TUTIMESTAMP_HPP_INCLUDED
