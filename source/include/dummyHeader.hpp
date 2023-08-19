#include<iostream>

using namespace std;

class dummyClass 
{
    int age;
    
    public:

    dummyClass()
    {
        age = 18;
    }

    void getAge()
    {
        cout<< "Age is "<<age;
    }
};