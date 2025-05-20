//Una estacion ambiental realiza la medicion de la temperatura maxima diaria durante los ultimos 7 dias de la semana en una zona rural. Debido al cambio climatico, es importante analizar los dias con temperaturas fuera de lo normal.
//Escriba un programa que:
//1.Permita ingresar las 7 temperaturas maximas registradas (en °c ) y las almacene en un vector.
//Determine: 1. El dia (indice) en el que se registro la mayor temperatura., 2.Cuantos dias tuvieron temperaturas por encima de 35°C (Alerta de calor extremo). , 3.El promedio semanal de temperatura.
//Finalmente, imprima el vector original con sus valores, la temperatura maxima con su posicion, la cantidad de dias criticos, y el promedio semanal.

#include <iostream>
using namespace std;

int main(){
	
	int Semana[7];
	int Temperatura;
	int Dia1=0, MayorT=0;
	
	for(int i=1; i<=7; i++){
		cout<<"Ingresar la temperatura del dia "<<i<<endl;
		cin>>Semana[i]; cout<<" °C "<<endl; 
		if(Semana[i]>MayorT){
		MayorT=Semana[i];
	}
	}
	cout<<"El dia con mayor temperatura fue: "<<MayorT<<" °C "<<endl;
	
	
	
	
	
	
	
	
	return 0;
}