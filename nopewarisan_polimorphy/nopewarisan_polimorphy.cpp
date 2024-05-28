#include <iostream>
using namespace std;

class BaseClass
{
public:
    virtual void Perkenalan()
    {
        cout << "Hallo saya Function dari base class";
    }
};

class DerivedClass : public BaseClass
{
public:
    void Perkenalan()
    {
        cout << "Hallo saya Function dari derived Class";
    }
};

int main()
{
    DerivedClass a;
    a.Perkenalan();

    return 0;
}