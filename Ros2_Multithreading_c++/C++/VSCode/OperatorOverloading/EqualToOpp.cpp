#include <iostream>

using namespace std;

class EqualToOpp
{
private:
    int data_{0};

public:
    EqualToOpp(/* args */);
    EqualToOpp(int);
    EqualToOpp(const EqualToOpp &other);
    const EqualToOpp &operator=(const EqualToOpp &other);
    friend ostream &operator<<(ostream &out, EqualToOpp &other);
    int operator+(const EqualToOpp &other);
    int operator*(const EqualToOpp &other);
    ~EqualToOpp();
};

EqualToOpp::EqualToOpp(/* args */)
{
}

int EqualToOpp::operator+(const EqualToOpp &other)
{
    return this->data_ + other.data_;
}

EqualToOpp::EqualToOpp(int val)
{
    this->data_ = val;
}

EqualToOpp::EqualToOpp(const EqualToOpp &other)
{
    cout << "Copy constructor " << endl;
    this->data_ = other.data_;
}

const EqualToOpp &EqualToOpp::operator=(const EqualToOpp &other)
{
    cout << "Equal to Opertor" << endl;
    this->data_ = other.data_;
    return *this;
}

ostream &operator<<(ostream &out, EqualToOpp &other)
{
    out << other.data_;
    return out;
}

int EqualToOpp::operator*(const EqualToOpp &other)
{
    return this->data_ * other.data_;
}

EqualToOpp::~EqualToOpp()
{
}

int main()
{
    EqualToOpp e1(1), e3(5), e4(5);
    cout << e1 + e3 * e4 << endl;

    return 0;
}