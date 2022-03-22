#include<iostream>
#include<conio.h>
using namespace std;

class Hitung {
	friend ostream&operator<<(ostream&,const Hitung&);
	friend istream&operator>>(istream&,Hitung&);
public:
	Hitung();
	void hitung_jumlahnya(){jumlah=(a+b+c);}
private:
	int a,b,c;
	int jumlah;	
};

Hitung::Hitung(){
	cout<<"Program menghitung jumlah 3 integer\n";
	cout<<"Selamat berkarya\n";
}
istream&operator>>(istream&in,Hitung&masukkan){
	cout<<"Masukkan nilai a:";
	cin>>masukkan.a;
	cout<<"Masukkan nilai b:";
	cin>>masukkan.b;
	cout<<"Masukkan nilai c:";
	cin>>masukkan.c;
	return in;
}

ostream&operator<<(ostream&out,const Hitung&keluaran){
	cout<<"Nilai a:"<<keluaran.a<<endl;
	cout<<"Nilai b:"<<keluaran.b<<endl;
	cout<<"Nilai c:"<<keluaran.c<<endl;
	cout<<"Jumlah 3 integer di atas:"<<keluaran.jumlah<<endl;
	return out;
}

main(){
	Hitung x;
	cin>>x;
	x.hitung_jumlahnya();
	cout<<x;
	getch();
	return 0;
}

