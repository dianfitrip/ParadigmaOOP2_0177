#include <iostream>
using namespace std;

class Seseorang
{
public:
	virtual void pesan() = 0;		//untuk yang ngga menggunakan definisi(pure virtual function)

	//virtual void pesan() {
	//	cout << "Pesan dari seseorang" << endl;
	// }								//untuk virtual function yang biasa
};


