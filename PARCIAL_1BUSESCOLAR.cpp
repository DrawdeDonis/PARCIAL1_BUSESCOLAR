
/*	Programa: 			Bus_Escolar


- Implementar una pila y mediante las instrucciones push/pop se deben de ir actualizando los pasajeros, 
y los asientos disponibles. Se pueden recoger pasajeros push o sacar pasajeros en esta pila. Recordar 
que se debe de implementar una función que indique si la cola está vacía. */

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main()
{
	//Variables Globales
   	int i,opcion;
   	
   	int bus[20],  	
   		asiento;
   		
   	//inicializacion del for en 0
   	for (i=0;i<20;i++)
   	bus[i]=0;
   	cout<<"Todos los asientos estan vacios ... ";
   	getch();
   
   	do{
	   	system("cls");
	   	cout<<".:Menu de Acciones:."<<endl;
   		cout<<"1. Recoger Alumno"<<endl;
   		cout<<"2. Retirar Alumno"<<endl;
   		cout<<"3. Mostrar Disponibilidad de Asientos"<<endl;
   		cout<<"4. Salir"<<endl;
   		cin>>opcion;
   		switch(opcion){
   			case 1:
   				system("cls");
   				cout<<".:Recogiendo Alumno:."<<endl;
				//validacion de los datos de los asientos 
				do{
   					cout<<"Digite un numero de asiento [1-20]: ";
   					cin>>asiento;
   				
   					if((asiento<1)||(asiento>20))
  					cout<<"El dato digitado no es valido ..."<<endl;
			   		}while((asiento<1)||(asiento>20));					
				
				//validacion de los  asientos disponibles	   	
				if(bus[asiento]==0){
					bus[asiento]=1;
					cout<<"Su operacion se realizo con exito ..."<<endl;
				}
				else
				cout<<"El asiento no esta disponible ..."<<endl;
   				getch();
   				break;
   				
   			case 2:
   				system("cls");
   				cout<<".:Retirando Alumno:."<<endl; 
				//validacion de los  datos entre los rangos establecidos
				do{
   					cout<<"Digite un numero de asiento [1-20]: ";
   					cin>>asiento;
   				
   					if((asiento<1)||(asiento>20))
  					cout<<"El dato digitado no es valido ..."<<endl;
			   		}while((asiento<1)||(asiento>20));
				
				if(bus[asiento]==0)
				cout<<"El asiento no ha sido ocupado ..."<<endl;
				if(bus[asiento]==1){
					bus[asiento]=0;
					cout<<"El alumno ha sido retirado ... "<<endl;
				}			
   				getch();
				break;
   			case 3:
   				system("cls");
   				cout<<".:Mostrando Disponibilidad de Asientos:."<<endl; 
   				cout<<"La Disponibilidad de los asientos es: "<<endl;
   				for(i=0;i<=20;i++){
   					if(bus[i]==1)
   					cout<<i<<"-";
				   }
   				getch();
				break;	
		   }
   }while (opcion != 4);
   
   getch();
   return 0;
}
