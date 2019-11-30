#include <iostream>
using namespace std;

int main(){
	int l;
	
	cout<<"lebar segi enam :" ;
	cin>>l;
	
	for (int i=0; i<=l; i++){
		for (int j=l; j>i; j--){
			cout<<" ";
		}
		for (int k=0; k<=2* (i+4);k++){
			cout<<"*";
		}
		cout<<endl;
	}
	for (int i=1; i<=l ;i++){
		for (int j=0 ; j<i; j++){
			cout<<" ";
		}
		for (int k=l; k>(2*(i-l));k--){
			cout<<"*";
		}
		cout<<endl;
	}
}
