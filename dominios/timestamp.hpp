#ifndef TIMESTAMP_HPP_INCLUDED
#define TIMESTAMP_HPP_INCLUDED

class Timestamp {
private:
    string timestamp;
    void validar(string);
    void lancaExcecao();
public:
    string getTimestamp() const;
    void setTimestamp(string);
};

inline string Timestamp::getTimestamp()const {
    return timestamp;
};

#endif // TIMESTAMP_HPP_INCLUDED
