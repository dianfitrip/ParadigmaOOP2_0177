#include <iostream>
using namespace std;

//class parent
//tambahkan final sesudah nama class
//untuk mencegah adanya overriding(menimpa)

class BaseClass
{
public:
	virtual void perkenalan()  //final (ditambahkan disini jika tidak ingin di override
	{
		cout << "halo saya function dari base class";
	}
};

class DerivedClass : public BaseClass
{
public:
	void Perkenalan()
	{
		cout << "halo saya function dari derivered class";
	}
};

int main()
{
	DerivedClass a;
	a.perkenalan();

	return 0;
}