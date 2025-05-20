#include <iostream>
using namespace std;

int main(){
	
	int elementos[3];
	int total[3];
	int a,b,j,suma=0;
	
	for(int i=0; i<3; i++){
		cout<<"Ingrese los numeros de los elementos del ejercicio: "<<endl;
		cin>>elementos[i];		
	}
	for(int b=0; b<3; b++){
		total[b]=elementos[b]*elementos[b];
	}
	for(j=0; j<3; j++){
		suma=total+total[b];
	} 
	cout<<"El resultado de la suma de cuadrados es: "<<suma<<endl;
	
	return 0;
}