#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <stdio.h>
#include <iostream>

int cantidad=0,num;
char resp;
int arreglo[12] ;
int A;
using namespace std;
int main ()
{

    char temporal[100];
    for(int i = 0; i < 12; i++){
        arreglo[12]= i+1;
       
    }
    cout<<"\t\t\t\t\tBienvenido a la Estacion de Autobuses"<<endl;
	cout<<"\t\t\t\t\t\tInformacion Importante"<<endl;
    printf("*****Nombre y Apellido del ocupante*****<\n");
    scanf("%100s", temporal);
    string nombre = temporal; 
    printf("Te doy la bienvenida %s", nombre.c_str());
    cout<<endl;

    do{
    printf("El numero de asientos son: %d\n",arreglo[12]);
	 cout<<endl;//Salto de linea
    cout<<"Introduce la cantidad de asientos que deseas comprar: "<<endl;
    cin>>cantidad;
    arreglo[12]= arreglo[12]-cantidad;

    for(int i=1;i<=cantidad;i++){
        printf("Introduce un numero de asiento: \n");
        scanf("%d",&arreglo[A]);
    cout<<endl;//Salto de linea
    cout<<endl;//Salto de linea
        switch(arreglo[A]){
        case 1:
            if(arreglo[A]==1){
            printf("Este asiento se encuentra con ventana y No esta disponible\n");
            }
            break;
            case 2:
            if(arreglo[A]==2){
            printf("Este asiento se encuentra en el pasillo y esta Disponible\n");
            }
            break;
            case 3:
            if(arreglo[A]==3){
            printf(" Este asiento se encuentra con ventana y esta Disponible\n");
            }
            break;
            case 4:
            if(arreglo[A]==4){
            printf("Este asiento se encuentra en el pasillo y No esta Disponible\n");
            }
            break;
            case 5:
            if(arreglo[A]==5){
            printf("Este asiento se encuentra con Ventana y esta Disponible\n");
            }
            break;
            case 6:
            if(arreglo[A]==6){
            printf("Este asiento se encuentra en el pasillo y esta Disponible\n");
            }
            break;
            case 7:
            if(arreglo[A]==7){
            printf("Este asiento se encuentra en el pasillo y esta Disponible\n");
            }
            break;
            case 8:
            if(arreglo[A]==8){
            printf("Este asiento se encuentra con ventana y esta Disponible\n");
            }
            break;
            case 9:
            if(arreglo[A]==9){
            printf("Este asiento se encuentra en el pasillo y No Disponible\n");
            }
            break;
            case 10:
            if(arreglo[A]==10){ 
            printf("Este asiento se encuentra con ventana y esta Disponible\n");
            }
            break;
            case 11:
            if(arreglo[A]==11){ 
            printf("Este asiento se encuentra en el pasillo y No Disponible\n");
            }
            break;
            case 12:
            if(arreglo[A]==12){ 
            printf("Este asiento se encuentra con ventana y No Disponible\n");
            }
            break;
    }

    }
    cout<<endl;//Salto de linea
    cout<<"Si desea continuar introduzca S, si desea salir N"<<endl;
    cin>>resp;
    }
    while(resp != 'N' && resp != 'n');
    system("PAUSE");
}
