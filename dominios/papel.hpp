#ifndef PAPEL_HPP_INCLUDED
#define PAPEL_HPP_INCLUDED

class Papel {
private:
    string papel;
    void validar(string);
public:
    string getPapel() const;
    void setPapel(string);
};

inline string Papel::getPapel() const {
    return papel;
}

#endif // PAPEL_HPP_INCLUDED
