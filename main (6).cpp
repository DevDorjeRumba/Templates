                                           //Function Template
#include <iostream>

using namespace std;

template<typename T>
void swapp(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x=10, y=20;
    double a = 55.55, b = 77.77;

    cout<<"\nBefore swap: "<<x<<" and "<<y<<endl;
    swapp(x, y);
    cout<<"\nBefore swap: "<<x<<" and "<<y<<endl;

    cout<<"\nBefore swap: "<<a<<" and "<<b<<endl;
    swapp(a, b);
    cout<<"\nBefore swap: "<<a<<" and "<<b<<endl;


    return 0;
}
