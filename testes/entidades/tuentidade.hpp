#ifndef TUENTIDADE_HPP_INCLUDED
#define TUENTIDADE_HPP_INCLUDED

#include "dominios.hpp"
#include "entidades.hpp"

class TUEntidade {
    private:
        const static int VALOR_VALIDO = 20;
        Entidade *entidade;
        int estado;
        void setUp();
        void tearDown();
        void testarCenario();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
}

#endif // TUENTIDADE_HPP_INCLUDED
