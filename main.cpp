#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include "servicos/servicos.hpp"
#include "testes/dominios/tudominios.hpp"
#include "testes/entidades/tuentidades.hpp"
#include "apresentacao/apresentaraplicacao.hpp"
#include <iostream>

using namespace std;

int main() {
    ServicoCriarTabelas sct;
    ApresentarAplicacao ap;

    try {
        sct.criarTabelas();
    } catch (exception& ex) {
        cout << ex.what() << endl;
    }
    ap.apresentarAplicacao();

    return 0;
}
