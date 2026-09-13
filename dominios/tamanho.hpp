#ifndef TAMANHO_HPP_INCLUDED
#define TAMANHO_HPP_INCLUDED

class Tamanho {
private:
    string tamanho;
    void validar(string);
public:
    inline static string const GRANDE = "grande";
    inline static string const MEDIO = "medio";
    inline static string const PEQUENO = "pequeno";
    string getTamanho() const;
    void setTamanho(string);
};

inline string Tamanho::getTamanho() const {
    return tamanho;
}

#endif // TAMANHO_HPP_INCLUDED
