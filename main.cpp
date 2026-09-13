#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Refatorando dominios: Timestamp" << endl;

    Timestamp timestamp;

    timestamp.setTimestamp("01-JAN-2026-10:00");
    cout << "ok" << endl;
    timestamp.setTimestamp("00-JAN-2016-10:00");
    return 0;
}
