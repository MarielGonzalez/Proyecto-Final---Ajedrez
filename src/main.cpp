#include <cstdio>
#include <iostream>
using namespace std;


int main(){

	int fila, col; 
	char tablero[8][8];
	
	cout << ("\n");
	
		for(int fila=0; fila<8 ; fila++)  
	  	{
	  		for(int col=0; col<8; col++) 
	  		{
	  			
				if(fila == 0 && col== 0) 
	  			{
					//tablero[fila][col]='.';
					cout <<(tablero[fila][col]= 'R'); 


				}else if(fila > 0  && col== 0)  {
					cout << ("*");
			 
				}else // Imprime los espacios que hay entre el primer asterisco y el ultimo. Del segundo renglon hasta el penultimo.
	  			{
	  				cout << (".");
				}
			}
			cout << ("\n");
	  }

	return 0;
}