#include <iostream>
using namespace std;

int main(){
int bilangan []	= {8,5,2,4,5,7};
int i;
int jumbil=sizeof(bilangan)/sizeof(int);


//untuk menampilkan isi array 
for (i=0; i<jumbil; i++)
cout<<bilangan[i]<<endl;

return 0;
}
