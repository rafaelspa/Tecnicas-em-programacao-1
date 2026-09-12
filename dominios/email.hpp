#ifndef EMAIL_HPP_INCLUDED
#define EMAIL_HPP_INCLUDED

class Email {
private:
    string email;
    bool validarParteLocal(string);
    bool validarDominio(string);
    void validar(string);
public:
    string getEmail() const;
    void setEmail(string);
};

inline string Email::getEmail()const {
    return this->email;
}

#endif // EMAIL_HPP_INCLUDED
