
#include <iostream>
#include <stdio.h>
#include <conio.h>


using namespace std;

int main()
{
    /*int a, b, total;
    int seleccion;
    
    cout<<"EL siguiente programa realizara operaciones aritmeticas \n" << endl;
    
    cout<<"Escribe el primer numero: \n";
    
    cin>>a;
    
    cout <<"Escribe el segundo numero: \n";
    cin>>b;
    
    cout<<endl<<"Indica el número de la operación que desees realizar: \n" <<endl;
    cout<<"(1) Suma\n" << endl;
    cout<<"(2) Resta\n" << endl;
    cout<<"(3) Producto\n" << endl;
    cout<<"(4) División Entera\n" << endl;
    cout<<"(5) Módulo\n" << endl;
    
    cin>>seleccion;
    //Para realizar la operación solicitada utilizamos una estructura switch
    //Intencionalmente se ha omitido el uso de break;
    switch (seleccion) {
        case 1: cout << "La suma es: " << a + b << endl;  //Vamos a agregar el break como ejemplo;
        case 2: cout << "La resta es: " << a - b << endl;
        case 3: cout << "El producto es: " << a * b << endl;
        case 4: cout << "La división es: " << a / b << endl;
        case 5: cout << "El módulo es: " << a % b << endl;
        default: cout << "Opción no válida" << endl;
    } //Fin de switch
    cout<<"Operacion realizada con éxito \n" << endl;*/
    
    
    
//Ejemplo 2 usando C nativo
    
   
   
   
  char ch;
  printf("Introduzca una vocal: ");
  
  ch=getchar();
  
  switch(ch=toupper(ch)) {
  	
case 'A': printf("Se ha pulsado una a.\n");
//break;

case 'E': printf("Se ha pulsado una e.\n");
break;

case 'I': printf("Se ha pulsado una i.\n");
break;

case 'O': printf("Se ha pulsado una o.\n");
break;

case 'U': printf("Se ha pulsado una u.\n");
break;


default: printf("No es una vocal");
}
 
 getch(); 
    
    
    return 0;
    
    
    
    
    
}











