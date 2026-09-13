#include "dominios.hpp"
#include <set>
#include <iostream>

void Timestamp::validar(string timestamp){

    // modelo de timestamp valido DIA-MÊS-ANO-HORÁRIO
    // modelo de timestamp valido 01-JAN-2026-10:00

    string ts = timestamp;

    set<string> meses = {"JAN","FEB","MAR","ABR","MAI","JUN","JUL","AGO","SET","OUT","NOV","DEZ"};
    set<string> meses30dias = {"ABR","JUN","SET","NOV"};
    set<string> meses31dias = {"JAN","MAR","MAI","JUL","AGO","OUT","DEZ"};

    int d = stoi(ts.substr(0,2));
    string m = ts.substr(3,3);
    int a = stoi(ts.substr(7,4));
    int hh = stoi(ts.substr(12,2));
    int mm = stoi(ts.substr(15,2));

    // antes de validar o dia, checar se o mes eh valido
    if (meses.find(m) == meses.end()){
        lancaExcecao();
    }
    if  (meses30dias.find(m) == meses30dias.end()) {
        if (d <= 0 || d > 30) {
            lancaExcecao();
        }
    }
    if  (meses31dias.find(m) == meses31dias.end()) {
        if (d <= 0 || d > 31) {
            lancaExcecao();
        }
    }
    if (a < 2000 || a > 2099) {
        lancaExcecao();
    }
    if (hh < 0 || hh > 23) {
        lancaExcecao();
    }
    if (mm < 0 || mm > 59) {
        lancaExcecao();
    }
    // verifica ano bissexto
    if (m == "FEB") {
        if (a % 4 == 0) {
            if (a % 100 != 0) {
                if (d <= 0 || d > 29) { // eh bissexto
                    lancaExcecao();
                }
            } else if (a % 400 == 0) {
                if (d <= 0 || d > 29) { // eh bissexto
                    lancaExcecao();
                }
            } else {
                if (d <= 0 || d > 28) {
                    lancaExcecao();
                }
            }
        } else {
            if (d <= 0 || d > 28) {
                lancaExcecao();
            }
        };
    }
}

void Timestamp::setTimestamp(string timestamp) {
    try {
        validar(timestamp);
        this->timestamp = timestamp;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}

void Timestamp::lancaExcecao() {
    throw invalid_argument("Timestamp invalido");
}
