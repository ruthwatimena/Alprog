#include <iostream>
using namespace std;
int main (){
	
	int item;	
	int uang;
	int harga_sepatu = 650000;
	int harga_tas= 450000;
	int harga_baju = 250000;
	int harga_topi = 250000;
	int harga_kalung = 550000;

	cout<<"\n1.sepatu \n"<<"2. tas \n"<<"3. pakaian \n"<<"4. topi \n"<<"5.kalung \n";
	cin>>item;
	
	switch(item){
		case 1 :
			cout<<"sepatu = "<<harga_sepatu;
			cout<<"\n mendapatkan potongan harga 20000 \n";
			cout<<"masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-(harga_sepatu-20000);
			break;	
		case 2 :
			cout<<"tas = "<<harga_tas;
			cout<<"\n masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_tas;
			break;	
		case 3 :
			cout<<"baju = "<<harga_baju;
			cout<<"\n mendapatkan diskon 50% \n";
			cout<<"masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_baju * 50/100;
			break;
		case 4 :
			cout<<"topi = "<<harga_topi;
			cout<<" \n masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_topi;
			break;
		case 5 :
			cout<<"kalung = "<<harga_kalung;
			cout<<"\n mendapatkan diskon 30% + 20% \n";
			cout<<"masukkan uang = ";
			cin>>uang;
			cout<<"uang kembali = "<<uang-harga_kalung * 30/100 - 30000;
			break;
		default :
			cout<<"pilihan item salah";
				
	}
}


