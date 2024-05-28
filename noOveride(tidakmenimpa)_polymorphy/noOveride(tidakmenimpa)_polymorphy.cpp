#include <iostream>
using namespace std;

//class parent
//tambahkan final sesudah nama class
//untuk mencegah adanya overriding(menimpa)

class BaseClass
{
public:
	virtual void perkenalan()
	{
		cout << "halo saya function dari base class";
	}
};

