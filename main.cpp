#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include "testes/dominios/tudominios.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Teste Unitario: timestamp" << endl;

    TUTimestamp tutimestamp;

    cout << tutimestamp.run() << endl;

    return 0;
}
