#include <iostream>
using namespace std;
    int main (){
    
    	float alas;
    	float tinggi;
    	float panjang;
    	float lebar;
    	int pilihan ;
    	cout<< "1. hitung luas segitiga";
		cout<< "2.hitung luas persegi";
		cin>>pilihan ;
		
		switch(pilihan){
			case 1 :
				cout<<"masukkan alas";
				cin>>alas;
				cout<<"masukkan tinggi";
				cin>>tinggi;
				cout<<"luas="<<alas*tinggi*0.5<<"cm2";
				break;
			
			case 2 :
			    cout<<"masukkan panjang";
				cin>>panjang;
				cout<<"masukkan lebar";
				cin>>lebar;
				cout<<"luas="<<panjang*lebar<<"cm2";
				break;
				
			default :
				cout<<"input salah";	
		}   
    }
