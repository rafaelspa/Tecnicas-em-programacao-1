#ifndef PAPEL_HPP_INCLUDED
#define PAPEL_HPP_INCLUDED

class Papel {
private:
    string papel;
public:
    Papel();
    string const GESTOR = "gestor";
    string const DESENVOLVEDOR = "desenvolvedor";
    string getPapel();
    void setPapel(string);
};

inline string Papel::getPapel() {
    return papel;
}

#endif // PAPEL_HPP_INCLUDED
