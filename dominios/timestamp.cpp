#include "dominios.hpp"
#include <set>
#include <iostream>

Timestamp::Timestamp(string timestamp) {
    this->timestamp = timestamp;
};

void Timestamp::setTimestamp(string timestamp) {
    this->timestamp = timestamp;
};

bool Timestamp::validaTimestamp(){
    string ts = this->timestamp;

    set<string> meses = {"JAN","FEB","MAR","ABR","MAI","JUN","JUL","AGO","SET","OUT","NOV","DEZ"};

    int d = stoi(ts.substr(0,2));
    string m = ts.substr(3,3);
    int a = stoi(ts.substr(7,4));
    int hh = stoi(ts.substr(12,2));
    int mm = stoi(ts.substr(15,2));

    if (d < 0 || d > 31) {
        return false;
    }
    if (meses.find(m) == meses.end()){
        return false;
    }
    if (a < 2000 || a > 2099) {
        return false;
    }
    if (hh < 0 || hh > 23) {
        return false;
    }
    if (mm < 0 || mm > 59) {
        return false;
    }
    if (a % 4 == 0) {
        if (a % 100 != 0) {
            return true;
        } else if (a % 400 == 0) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    };
}
