//
// Created by Kelvin on 13/09/2017.
//

#ifndef SEQUENCECPP_SEQUENCE_H
#define SEQUENCECPP_SEQUENCE_H

#include <string>

class Sequence {
public:
    Sequence();
    Sequence(const Sequence& seq);
    Sequence(const std::string sid, const std::string desc = "", const std::string seq = "");

    virtual Sequence& operator= (Sequence& seq);
    virtual Sequence& operator= (std::string seq);
    virtual Sequence& operator= (const char* seq);
    virtual Sequence& operator= (const char c);

    // setters
    void header(std::string i_header);
    void id(std::string sid);
    void desc(std::string desciption);

    void append(std::string seq);
    void append(const char* seq);
    void append(const char c);

    // getters
    std::string header() const;
    std::string id() const;
    std::string desc() const;
    std::string seq() const;
    std::string sub_seq(const size_t start, const size_t end) const;

    size_t length() const;

    char& operator[] (const size_t pos);
    const char& operator[] (const size_t pos) const;

    // operators
    Sequence& operator+= (const Sequence& seq);
    Sequence& operator+= (const std::string seq);
    Sequence& operator+= (const char* seq);
    Sequence& operator+= (const char c);

    Sequence operator+ (const Sequence& seq);
    Sequence operator+ (const std::string seq);
    Sequence operator+ (const char* seq);
    Sequence operator+ (const char c);

    bool operator== (const Sequence& seq);
    bool operator!= (const Sequence& seq);

protected:
    std::string v_sid;
    std::string v_desc;
    std::string v_seq;

private:
};

// external operators
Sequence operator+ (const std::string& lhs, const Sequence& rhs);
Sequence operator+ (const char* lhs, const Sequence& rhs);
Sequence operator+ (const char lhs, const Sequence& rhs);

#endif //SEQUENCECPP_SEQUENCE_H
