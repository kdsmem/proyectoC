//Ejemplo de como crear una matriz

#include <iostream>
using namespace std;

int main(){
    int filas,columnas;
        cout<<"Ingrese a continuacion el numero de filas(F): "<<endl;
        cin>>filas;
        cout<<"Ingrese a continuacion el numero en la columna(C): "<<endl;
        cin>>columnas;
        int matriz[filas][columnas];
        for(int i=0; i<filas; i++){
            for(int j=0; j<columnas; j++){
            cout<<"A continuacion ingrese el numero de la fila "<<i<<"; y columna "<<j<<endl;
            cin>>matriz[i][j];
        }    
    }
    cout<<"Los numeros ingresados son los siguientes: "<<endl;
    for(int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            cout<<" "<<matriz[i][j]<<" "<<endl;
        }
    }


    return 0;
}
