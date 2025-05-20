//Calcular la media arimetica ponderada segun la siguiente formula 
#include <iostream>
using namespace std;

int main(){
	int n,x,w,i;
	int a=0;
	float suma=0;
	float total=0;
	int Notas[0];
	
	cout<<" A continuacion ingrese la cantidad de notas a promediar: "<<endl;
	cin>>n;
	int Elementos[n];
	int Lista[n];
	int Resultado[n];
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese las notas individualmente a promediar: "<<endl;
		cin>>Elementos[i];
	}
	for(int i=0; i<n; i++){
		cout<<"Ingrese las posiciones de notas: "<<endl;
		cin>>Lista[i];
	}
	for(int i=0; i<n; i++){
		cout<<"Numeros ingresados ["<<i<<"]="<<Elementos[i]<<endl;
		cout<<"Posicion de notas  ["<<i<<"]="<<Lista[i]<<endl;
	}
	for(int i=0; i<n; i++){
		suma=Elementos[i]*Lista[i];	
		total+=suma;
		total=
	}
	
	cout<<"El resultado total de las notas promediadas son: "<<total<<endl;
	
	}
	
	
	
	
	
	