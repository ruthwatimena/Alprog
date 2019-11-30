#include <iostream>
using namespace std;

int main (){
	int barang;
	int uang;
	int jumlah_barang;
	int harga_gula_pasir = 12000;
	int harga_sabun_cuci_piring = 6000;
	int harga_roti = 8000;
	int harga_teh = 10000;
	int harga_shampo = 22000;
	
	cout<<"Daftar barang \n"<<"1.gula_pasir = "<<harga_gula_pasir;
	cout<<"\n 2.sabun_cuci_piring = "<<harga_sabun_cuci_piring;
	cout<<"\n 3.roti = "<<harga_roti;
	cout<<"\n 4.teh = "<<harga_teh;
	cout<<"\n 5. shampo = "<<harga_shampo<<"\n";
	cin>>barang;
	
	switch(barang){
		case 1 :
			cout<<"gula_pasir = "<<harga_gula_pasir;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total yang harus dibayar = "<<harga_gula_pasir * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_gula_pasir * jumlah_barang);
			break;
		case 2 :
			cout<<"sabun_cuci_piring = "<<harga_sabun_cuci_piring;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total yang harus dibayar = "<<harga_sabun_cuci_piring * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_sabun_cuci_piring * jumlah_barang);
			break;
		case 3 :
			cout<<"roti = "<<harga_roti;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total  yang harus dibayar = "<<harga_roti * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_roti* jumlah_barang);
			break;
		case 4 :
			cout<<"teh = "<<harga_teh;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total  yang harus dibayar = "<<harga_teh * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_teh * jumlah_barang);
			break;
		case 5 :
			cout<<"shampo = "<<harga_shampo;
			cout<<"\n jumlah barang yang akan diambil = ";
			cin>>jumlah_barang;
			cout<<"\n harga total  yang harus dibayar = "<<harga_shampo * jumlah_barang;
			cout<<"\n tunai = ";
			cin>>uang;
			cout<<"kembali = "<<uang-(harga_shampo * jumlah_barang);
			break;
		default :
			cout<<"stok habis";
	}
}

