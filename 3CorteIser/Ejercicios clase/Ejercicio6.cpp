//Leer un vector de 30 elementos y calcular la suma de los elementos de orden impar. Imprimir el vector leido y la suma.
#include <iostream>
using namespace std;

int main(){
	int n=5;
	int Lista[5];
	int total=0;
	
	cout<<"Bienvenido al sumador de elementos en las posiciones impares: "<<endl;
	for(int i=1; i<=n; i++){
	cout<<"Ingresar el numero "<<i<<endl;
	cin>>Lista[i];
}
	for(int i=1; i<=n; i+=2){
		cout<<"Numeros ingresados ["<<i<<"]="<<Lista[i]<<endl;
		total=total+Lista[i];
	}
	cout<<"El total de la suma es: "<<total<<endl;	
	
	return 0;
}