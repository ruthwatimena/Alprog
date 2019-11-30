#include<iostream>
using namespace std;
int main (){
	int p=15;
	int l=10;
	int t=20;
	int volume=p*l*t;
	
	if(volume<=100){
	cout<<"balok kecil";
	
	}else if(volume>100&volume<=200){
	cout<<"balok sedang";
	
    }else{
    cout<<"balok besar";}
    cout<<volume<<"cm3";
}  
