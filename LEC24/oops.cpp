#include <iostream>
using namespace std;
class complex
{
private:
    int imag, real;

public:
    void print()
    {
        cout << "real: " << this->real << endl;
        cout << "imag:" << this->imag;
    }
    void setReal(int real)
    {
        this->real = real;
    }
    void setImag(int imag)
    {
        this->imag = imag;
    }
    complex operator+(complex a)
    {
        complex temp;
        temp.real = this->real+a.real;
        temp.imag = this->imag+a.imag; 
        return temp;
    }
};
int main()
{
    complex c1;
    complex c2;
    c1.setReal(10);
    c1.setImag(5);
    c2.setReal(5);
    c2.setImag(10);
    complex c3;
    c3 = c1 + c2;
    c3.print();

    return 0;
}