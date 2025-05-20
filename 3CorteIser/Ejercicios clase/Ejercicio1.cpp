#include <iostream>
using namespace std;

int main(){
	
	int b;
	int suma;
	int total=0;
	
	cout<<"Ingrese la cantidad de numeros que desea sumar : "<<endl;
	cin>>b;
	int elementos[b];
	
	for(int i=0; i<b; i++){
		cout<<"Ingrese El primer numero ["<<i<<"]"<<endl;
		cin>>elementos[i];	
	}
	for(int i=0; i<b; i++){
		cout<<"Numeros ingresados ["<<i<<"]="<<elementos[i]<<endl;
		total=total+elementos[i];
	}
	cout<<"El total de la suma es: "<<total<<endl;
	
	return 0;
}