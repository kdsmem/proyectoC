//Leer un vector de n elementos y conformar un segundo vector que contenga todos los elementos positivos del vector original, y un tercer vector que contenga todos los elementos negativos del vector original
// y un cuarto vector que contenga todos los elementos 0 del vector original. Imprimir los 4 Vectores 

#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	
	cout<<"Ingrese la cantidad de numeros que desea usar en el vector original : "<<endl;
	cin>>b;
	int elementos[b];
		
	for(int i=0; i<b; i++){
		cout<<"Bienvenido, Por favor ingrese el numero "<<i<<endl;
		cin>>elementos[i];
		a=a+1;	
	}
	int elementosv2[a];
	int elementosv3[a];
	int elementosv4[a];
	for(int j=0; j<a; j++){
		elementosv2[j]=elementos[j];
	}
	for(int k=0; k<a; k++){
		elementosv3[k]=elementos[k];
	}
	for(int l=0; l<a; l++){
		elementosv4[l]=elementos[l];
	}
	
	cout<<" Los numeros positivos del segundo vector son: "<<endl;	
	
	for(int ii=0; ii<b; ii++){
		if(elementosv2[ii]>0){
			cout<<" En el lugar: "<<ii<<" Se encuentra: "<<elementosv2[ii]<<endl;
		}
}
	cout<<" Los numeros negativos del tercer vector  son: "<<endl;	
	
	for(int ii=0; ii<b; ii++){
		if(elementosv3[ii]<0){
			cout<<" En el lugar: "<<ii<<" Se encuentra: "<<elementosv3[ii]<<endl;
		}	
	}
	cout<<" Los numeros 0 del cuarto vector  son: "<<endl;	
	
	for(int ii=0; ii<b; ii++){
		if(elementosv4[ii]==0){
			cout<<" En el lugar: "<<ii<<" Se encuentra: "<<elementosv4[ii]<<endl;
		}	
	}
	return 0;
}