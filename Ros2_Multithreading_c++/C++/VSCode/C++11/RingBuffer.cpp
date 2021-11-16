#include <iostream>

using namespace std;

template <typename T>
class RingBuffer
{
private:
    T *ptr_;
    size_t size;
    size_t counter{0};

public:
    class iterator;
    RingBuffer()
    {
        ptr_ = nullptr;
    };
    RingBuffer(size_t val)
    {
        ptr_ = new T[val];
        size = val;
    }
    void add(T data)
    {
        if (counter >= size)
        {
            counter = 0;
        }
        ptr_[counter] = data;
        counter++;
    }

    T &get(size_t pos) const
    {
        return ptr_[pos];
    }

    T &operator[](int pos) const
    {
        return ptr_[pos];
    }

    size_t getSize()
    {
        return size;
    }

    ~RingBuffer()
    {
        delete[] ptr_;
    }

    iterator begin()
    {
        return iterator(0, *this);
    }

    iterator end()
    {
        return iterator(size, *this);
    }
};

template <class T>
class RingBuffer<T>::iterator
{
    int pos_;
    RingBuffer &r_;

public:
    iterator(int pos, RingBuffer &r) : pos_(pos), r_(r){};
    bool operator!=(const iterator &other) const
    {
        return (pos_ != other.pos_);
    }

    iterator &operator++(int)
    {
        pos_++;
        return *this;
    }

    iterator &operator++()
    {
        ++pos_;
        return *this;
    }

    T &operator*()
    {
        return r_[pos_];
    }
};

int main()
{
    RingBuffer<int> rb(3);
    rb.add(0);
    rb.add(10);
    rb.add(100);

    for (RingBuffer<int>::iterator it = rb.begin(); it != rb.end(); it++)
    {
        cout << *it << endl;
    }
    cout << "C++11 style" << endl;

    for (auto i : rb)
    {
        cout << i << endl;
    }

    return 0;
}