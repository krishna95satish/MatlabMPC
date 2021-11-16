#include <iostream>

using namespace std;

class ComplexNum
{
private:
    double real_{0.0};
    double imaginary_{0.0};

public:
    ComplexNum(/* args */);
    ComplexNum(const ComplexNum &other);
    ComplexNum(double real, double imaginary) : real_(real), imaginary_(imaginary){};
    const ComplexNum &operator=(const ComplexNum &other);
    ComplexNum operator+(const ComplexNum &other);
    friend ostream &operator<<(ostream &out, const ComplexNum &other);
    bool operator!=(const ComplexNum &other);
    const ComplexNum operator*();
    bool operator==(const ComplexNum &other);
    ~ComplexNum();
};

ComplexNum::ComplexNum(/* args */)
{
}

ComplexNum::ComplexNum(const ComplexNum &other)
{
    real_ = other.real_;
    imaginary_ = other.imaginary_;
}

const ComplexNum &ComplexNum::operator=(const ComplexNum &other)
{
    real_ = other.real_;
    imaginary_ = other.imaginary_;
    return *this;
}

ComplexNum ComplexNum::operator+(const ComplexNum &other)
{
    return ComplexNum(this->real_ + other.real_, this->imaginary_ + other.imaginary_);
}

ostream &operator<<(ostream &out, const ComplexNum &other)
{
    out << other.real_ << " : " << other.imaginary_;
    return out;
}

bool ComplexNum::operator==(const ComplexNum &other)
{
    return (real_ == other.real_ && imaginary_ == other.imaginary_);
}

bool ComplexNum::operator!=(const ComplexNum &other)
{
    return !(*this == other);
}

const ComplexNum ComplexNum::operator*()
{
    return ComplexNum(real_, imaginary_ * -1);
}

ComplexNum::~ComplexNum()
{
}

int main()
{
    ComplexNum c1(1.0, 0.1), c0(1.0, 0.1), c2(1.1, 0.2), c3;
    c3 = c1 + c2 + c1;

    cout << c3 << endl;
    cout << endl;
    if (c1 != c2)
    {
        cout << "Same " << endl;
    }
    else
    {
        cout << "Different " << endl;
    }

    cout << "The conjugate of : " << c1 << " is : " << *c1 << endl;
}