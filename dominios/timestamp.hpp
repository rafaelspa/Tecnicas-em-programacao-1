#ifndef TIMESTAMP_HPP_INCLUDED
#define TIMESTAMP_HPP_INCLUDED

class Timestamp {
private:
    string timestamp;
public:
    Timestamp(string);
    string getTimestamp();
    void setTimestamp(string);
    bool validaTimestamp();
};

inline string Timestamp::getTimestamp(){
    return timestamp;
};

#endif // TIMESTAMP_HPP_INCLUDED
