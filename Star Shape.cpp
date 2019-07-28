#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int x,y,z,a;
	
	cout<<"Masukkan Jumlah Bintang yg Diinginkan untuk Membuat Pola	: ";
	cin>>a;
	for(x=1;x<=a;x++)
	{
		cout<<endl;
		for(y=a;y>=x;y--)
		{
			cout<<"*"<<" ";
		}
		for(z=1;z<=y;z++)
		{
			cout<<"    ";
		}
		for(z=a;z>=x;z--)
		{
			cout<<"*"<<" ";
		}
		for(y=1;y<=z;y++)
		{
			cout<<"    ";
		}
	}
	
	for(x=1;x<=a;x++)
	{
		cout << endl;
		for(y=1;y<=x;y++){
			cout<<"*"<<" ";
		}
		for(z=a;z>=y;z--){
			cout<<"  ";
		}
		for(z=a;z>=y;z--){
			cout<<"  ";
		}
		for(y=1;y<=x;y++){
			cout<<"*"<<" ";
		}
	}
}
