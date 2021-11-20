#include <cstdio>
#include <iostream>
using namespace std;

int fila, columna;
char tablero[8][8]; 

int main(int argc, char **argv) {
		cout << "Juguemos"  << endl;

	for (fila=0; fila<8; fila++) {
		for (columna=0; columna<8; columna++) {
			if (fila==0 || fila==6) {
			tablero[fila][columna] = '*';

			}
			else {
		 	tablero[fila][columna] = '*';
			}
	
	}

}


	for (fila=0; fila<8; fila++) {

		cout << "\n"  << endl;

		for (columna=0; columna<8; columna++) {
			
		cout << tablero[fila][columna]  << endl;	

			
	
	}

	}

cout << "\n \n "  << endl;




	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;

}