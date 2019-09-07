#ifndef BIG_UNSIGNED_INT_H_
#define BIG_UNSIGNED_INT_H_

#include<string>
#include<vector>
#include<iostream>

class BigUnsignedInt{

public:

    BigUnsignedInt();
    explicit BigUnsignedInt(const std::string &);

    BigUnsignedInt& operator+=(const BigUnsignedInt&);
    BigUnsignedInt& operator-=(const BigUnsignedInt&);
    BigUnsignedInt& operator*=(const BigUnsignedInt&);
    BigUnsignedInt& operator/=(const BigUnsignedInt&);
    BigUnsignedInt& operator%=(const BigUnsignedInt&);

    BigUnsignedInt& operator++();
    BigUnsignedInt& operator--();

    const BigUnsignedInt operator++(int);
    const BigUnsignedInt operator--(int);

    BigUnsignedInt& operator+();
    BigUnsignedInt& operator-();

    BigUnsignedInt operator=(const BigUnsignedInt&);
    BigUnsignedInt operator=(const std::string&);

    friend BigUnsignedInt pow(const BigUnsignedInt&, const BigUnsignedInt&);
    friend BigUnsignedInt pow(const BigUnsignedInt&, const int);

    friend std::istream& operator>>(std::istream&, BigUnsignedInt&);
    friend std::ostream& operator<<(std::ostream&, const BigUnsignedInt&);

    friend BigUnsignedInt operator+(const BigUnsignedInt&, const BigUnsignedInt&);
    friend BigUnsignedInt operator-(const BigUnsignedInt&, const BigUnsignedInt&);
    friend BigUnsignedInt operator*(const BigUnsignedInt&, const BigUnsignedInt&);
    friend BigUnsignedInt operator/(const BigUnsignedInt&, const BigUnsignedInt&);
    friend BigUnsignedInt operator%(const BigUnsignedInt&, const BigUnsignedInt&);

    friend bool operator>(const BigUnsignedInt&, const BigUnsignedInt&);
    friend bool operator>=(const BigUnsignedInt&, const BigUnsignedInt&);
    friend bool operator<(const BigUnsignedInt&, const BigUnsignedInt&);
    friend bool operator<=(const BigUnsignedInt&, const BigUnsignedInt&);

    friend bool operator==(const BigUnsignedInt&, const BigUnsignedInt&);
    friend bool operator!=(const BigUnsignedInt&, const BigUnsignedInt&);

private:

    std::vector<unsigned long> vec;

    void trim();
};

#endif
