
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
    
    cout<<endl<<"Indica el n�mero de la operaci�n que desees realizar: \n" <<endl;
    cout<<"(1) Suma\n" << endl;
    cout<<"(2) Resta\n" << endl;
    cout<<"(3) Producto\n" << endl;
    cout<<"(4) Divisi�n Entera\n" << endl;
    cout<<"(5) M�dulo\n" << endl;
    
    cin>>seleccion;
    //Para realizar la operaci�n solicitada utilizamos una estructura switch
    //Intencionalmente se ha omitido el uso de break;
    switch (seleccion) {
        case 1: cout << "La suma es: " << a + b << endl;  //Vamos a agregar el break como ejemplo;
        case 2: cout << "La resta es: " << a - b << endl;
        case 3: cout << "El producto es: " << a * b << endl;
        case 4: cout << "La divisi�n es: " << a / b << endl;
        case 5: cout << "El m�dulo es: " << a % b << endl;
        default: cout << "Opci�n no v�lida" << endl;
    } //Fin de switch
    cout<<"Operacion realizada con �xito \n" << endl;*/
    
    
    
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











