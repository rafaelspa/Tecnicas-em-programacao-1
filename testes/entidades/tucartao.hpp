#ifndef TUCARTAO_HPP_INCLUDED
#define TUCARTAO_HPP_INCLUDED

#include "../../dominios/dominios.hpp"
#include "../../entidades/entidades.hpp"

class TUCartaoDeAtividade {
    private:
        const static int VALOR_VALIDO = 20;
        CartaoDeAtividade *cartaoDeAtividade;
        int estado;
        void setUp();
        void tearDown();
        void testarCenario();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

#endif // TUCARTAO_HPP_INCLUDED
