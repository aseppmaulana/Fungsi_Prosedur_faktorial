#include <iostream>
using namespace std;

void faktorial (int a);
int b;
int main()

{
	cout<<"masukkan bilangan : "; cin >>b;
	faktorial(b);
}
void faktorial (int a)
{
	
	int b =0;
	
	long long hasil =1;
	if(a<=1)
	{
		cout<<1;
		
	}
	else {
		
		for( b=1; b<=a ; b++)
		{
			hasil = hasil*b;
		}
	}
	
	cout <<"Hasil faktorial : " << hasil;
}