                                          // Class Templates
#include <iostream>

using namespace std;

template<typename T>
class Test 
{
private:
    T data;
public:
    Test(T value): data(value){}
    
    void set_data(T val)
    {
        data = val;
    }
    T get_data()
    {
        return data;
    }
    
    
    void display()
    {
    cout<<"\nData: "<<data<<endl;
    }
};

int main()
{
    Test<int> obj1(7);
    Test<double> obj2(3.13);
    Test<string> obj3("Hello World");
    
    obj1.display();
    obj2.display();
    obj3.display();
    

    return 0;
}