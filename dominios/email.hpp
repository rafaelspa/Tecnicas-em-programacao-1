#ifndef EMAIL_HPP_INCLUDED
#define EMAIL_HPP_INCLUDED

class Email {
private:
    string email;
public:
    bool validarParteLocal(string);
    bool validarDominio(string);
    bool validarEmail(string);
    string getEmail();
    void setEmail(string);
};

inline string Email::getEmail() {
    return this->email;
}

#endif // EMAIL_HPP_INCLUDED
