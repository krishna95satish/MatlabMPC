#include <iostream>

class CaptureThis
{
private:
    int a{0};
    int b{0};

public:
    CaptureThis(/* args */){};
    void test()
    {
        int c{5};
        int d{5};
        auto clsLmd = [&, this]()
        {
            this->a = 12;
            std::cout << this->a << c << " " << d << " " << std::endl;
        };
        clsLmd();
    }
    ~CaptureThis()
    {
        std::cout << this->a << std::endl;
    };
};

int main()
{
    CaptureThis c;
    c.test();

    return 0;
}
