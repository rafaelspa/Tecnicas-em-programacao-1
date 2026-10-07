#ifndef TUTEXTO_HPP_INCLUDED
#define TUTEXTO_HPP_INCLUDED

class TUTexto {
private:
    Texto *texto;
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

#endif // TUTEXTO_HPP_INCLUDED
