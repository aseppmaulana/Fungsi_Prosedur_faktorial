#include <iostream>
#include <conio.h>
using namespace std;


main() {
	int b, a;
	long hasil;
	
cout << "Masukkan Angka : "; cin >> a;
hasil=1;
 	for  (b=a; b>=1; b--)
	{
			hasil=hasil*b;
	}
cout <<"Hasil Faktorial : " <<hasil<<"\a"; getch();
}
	

