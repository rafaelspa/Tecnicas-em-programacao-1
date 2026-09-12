#ifndef PRIORIDADE_HPP_INCLUDED
#define PRIORIDADE_HPP_INCLUDED

class Prioridade {
private:
    string prioridade;
    void validar(string);
public:
    inline static string const ALTA = "alta";
    inline static string const MEDIA = "media";
    inline static string const BAIXA = "baixa";
    string getPrioridade() const;
    void setPrioridade(string);
};

inline string Prioridade::getPrioridade() const {
    return prioridade;
}

#endif // PRIORIDADE_HPP_INCLUDED
