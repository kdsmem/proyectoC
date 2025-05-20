#include <iostream>
using namespace std;

int main(){
	int Lista[7]={2,3,8,18,10,30,20};
	int a=0, b=0;
	
	cout<<"Bienvenido al calculador de las posiciones de los numeros segun su vector: "<<endl;
	
	for(int i=1; i<7; i+=2){
		cout<<" En el lugar: "<<i<<" Se encuentra: "<<Lista[i]<<endl;
		a=a+1;
	}
	
	int Listav2[a];
	for(int j=1; j<7; j+=2){
		Listav2[b]=Lista[j];
		b=b+1;
	}
	
	cout<<" Los nuevos numeros del nuevo vector son: "<<endl;
	
	for(int ii=0; ii<a; ii++){
		cout<<"Listav2 ["<<Listav2[ii]<<"]"<<endl;
	}
	
	return 0;
	}
	

