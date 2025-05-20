//Leer un vector de 20 elementos y determinar cual es el elemento mayor del vector e imprimirlo asi como el vector leido.
#include <iostream>
using namespace std;

int main(){
	
	int n=5;
	int Lista[5];
	int mayor;
	
	cout<<"Bienvenido al programa escogedor del elemento mayor del vector "<<endl;
	for(int i=0; i<n; i++){
	cout<<"Ingresar el numero "<<i<<endl;
	cin>>Lista[i];
	if(Lista[i]>mayor){
		mayor=Lista[i];
	}
}
	for(int i=0; i<n; i++){
		cout<<"Numeros ingresados ["<<i<<"]="<<Lista[i]<<endl;
	}
	cout<<"El numero mayor del vector es: "<<mayor<<endl;
	
	return 0; 
}