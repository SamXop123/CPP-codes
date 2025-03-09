#include <iostream>
using namespace std;

int fun(int x)
{
    x = 30;
    return x;
}

void func(int &m)
{
    m=8;
}

void funct(int *ptr)
{
    *ptr = 30;
}

int main()
{

    // Pass by value
    int y = 20;
    cout << fun(y) << endl;
    cout << "y = " << y << endl;

    // Pass by reference
    int a=10;
    cout <<"Value of 'a' is :" <<a<< endl;
    func(a);
    cout << "Now value of 'a' is :" << a << endl;

    // Pass by Pointer
    int k = 20;
    funct(&k);
    cout << "k = " << k << endl;

    return 0;
}
