#include <cstdio>
#include <iostream>
using namespace std;


int main(){

	int fila, col; 
	char tablero[8][8];
	
	cout << ("\n"); // Solo lo ponemos para dejar un poco de espacio.
	
		for(int fila=0; fila<8 ; fila++) // Este for es para hacer un salto de renglon. 
	  	{
	  		for(int col=0; col<8; col++) //Este for imprime los astediscos o espacios dependiendo de la condicion if de abajo. col de columna
	  		{
	  			/*Este if es para que imprima la primera linea completa y la ultima tambien de puros asteriscos del marco. 
	  			  Y despues solo pondra un asterisco en la primera posicion y en la ultima. 
	  			*/
				if(fila == 0 || fila == 8 || col== 0 || col==8) 
	  			{
					tablero[fila][col]='*';
					cout <<(tablero[fila][col]); 

				}else if(fila == 1 || fila == 8 || col== 1 || col==8 ){
					tablero[fila][col]='/';
					cout <<(tablero[fila][col]); 

			 
				}else // Imprime los espacios que hay entre el primer asterisco y el ultimo. Del segundo renglon hasta el penultimo.
	  			{
	  				cout << ("8");
				}
			}
			cout << ("\n");
	  }

	return 0;
}