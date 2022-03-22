//bagian 1
#include <iostream>
using namespace std;
int main ()
{
    int jenis, liter, total, bayar, kembali;
    string nama;
    cout<<"============== PROGRAM SPBU =============="<<endl;
    cout<<"Jenis bensin"<<endl;
    cout<<"1. Pertalite"<<endl;
    cout<<"2. Pertamax"<<endl;
    cout<<"Pilih jenis bensin : ";
    cin>>jenis;
    //bagian 2
    if (jenis==1)
    {
        cout<<"\nMasukan nama pembeli : ";
        cin>>nama;
        cout<<"Masukan jumlah liter : ";
        cin>>liter;
        total=7000*liter;
        cout<<"Total pembayaran : "<<total<<endl;
        cout<<"Masukan jumlah bayar : ";
        cin>>bayar;
        kembali=bayar-total;
        cout<<"Kembalian : "<<kembali<<endl;
        cout<<"\n=========================================="<<endl;
        cout<<"          STRUK PEMBELIAN SPBU"<<endl;
        cout<<"=========================================="<<endl;
        cout<<"Nama Pembeli \t\t\t= "<<nama<<endl;
        cout<<"Jenis Bensin \t\t\t= Pertalite"<<endl;
        cout<<"Harga Per-liter  \t\t= Rp. 7000"<<endl;
        cout<<"Jumlah Pesanan (Per-liter)  = "<<liter<<" liter"<<endl;
        cout<<"=========================================="<<endl;
        cout<<"Total   	\t\t= Rp. "<<total<<endl;
        cout<<"Bayar   	\t\t= Rp. "<<bayar<<endl;
        cout<<"=========================================="<<endl;
        cout<<"Kembali 	\t\t= Rp. "<<kembali<<endl;
        cout<<"=========================================="<<endl;
        cout<<"               TERIMA KASIH               "<<endl;
        cout<<"=========================================="<<endl;
    }
    //bagian 3
    else if (jenis==2)
    {
        cout<<"\nMasukan nama pembeli : ";
        cin>>nama;
        cout<<"Masukan jumlah liter : ";
        cin>>liter;
        total=9000*liter;
        cout<<"Total pembayaran : "<<total<<endl;
        cout<<"Masukan jumlah bayar : ";
        cin>>bayar;
        kembali=bayar-total;
        cout<<"Kembalian : "<<kembali<<endl;
        cout<<"\n=========================================="<<endl;
        cout<<"          STRUK PEMBELIAN SPBU"<<endl;
        cout<<"=========================================="<<endl;
        cout<<"Nama Pembeli 		\t= "<<nama<<endl;
        cout<<"Jenis Bensin 		\t= Pertamax"<<endl;
        cout<<"Harga Per-liter  	\t= Rp. 9000"<<endl;
        cout<<"Jumlah Pesanan (Per-liter)  = "<<liter<<" liter"<<endl;
        cout<<"=========================================="<<endl;
        cout<<"Total  				= Rp. "<<total<<endl;
        cout<<"Bayar  				= Rp. "<<bayar<<endl;
        cout<<"=========================================="<<endl;
        cout<<"Kembali 				= Rp. "<<kembali<<endl;
        cout<<"=========================================="<<endl;
        cout<<"               TERIMA KASIH"<<endl;
        cout<<"=========================================="<<endl;
    }
    return 0;
}
