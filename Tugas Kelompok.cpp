#include <iostream>
using namespace std;

int main ()
{
	float x, y;
	int a, b;
	
	cout << "        QC Neo-Santara      " << endl;
	cout << "============================" << endl;
	cout << "   Pemasangan Kursi Depan   " << endl;
	cout << "============================" << endl;
	cout << "(1 = Baik // 0 = Tidak Baik)" << endl;
	cout << "Obeng = "; cin >> a;
	
	if (a == 1)
	{
		x = 0.5;
	}
	else if (a == 0)
	{
		x = 0;
	}
	
	cout << "Sampul = "; cin >> b;
	
	if (b == 1)
	{
		y = 0.5;
	}
	else if (b == 0)
	{
		y = 0;
	}
	
	cout << "Proses Quality = " << x + y << "%" << endl;
}
