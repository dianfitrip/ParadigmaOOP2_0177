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


class Joko : public Seseorang
{
public:
	//deklarasi
	void pesan()
	{
		cout << "pesan dari joko" << endl;
	}
};


class Lia : public Seseorang
{
public:
	void pesan() {
		cout << "pesan dari lia" << endl;
	}
};


int main()
{
	Seseorang* obyek;
	Joko a;
	Lia b;

	obyek = &a;
	obyek->pesan();
	obyek = &b;
	obyek->pesan();

	//akses method pesan() dari class seseorang
	//a.seseorang::pesan();

	return 0;
}