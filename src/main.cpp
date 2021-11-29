#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int x, y; 
char tablero[8][8];
const char disponible = '-', ocupado = '+';
void fijarRangoReina(int x, int y){

	// Rango horizontal con valor horizontal (x)
	for(int j=0; j<8;j++){
		tablero[x][j] = ocupado;
	}

	// Rango vertical con valor horizontal (y)
	for(int i=0; i<8;i++ ){
		tablero[i][y] = ocupado;
	}

	// Primera diagonal
	int x2 = x, y2 = y;
	if(x<y){
		y2 -= x;
		x2 = 0;
	}else if(x>y){
		x2 -= y;
		y2 = 0;
	}else{
		x2 = 0;
		y2 = 0;
	}

	for(int i=0; i<8;i++){
		int ye = y2;
		if((x2+i < 8) && (ye+i < 8)){
			tablero[x2+i][y2+i] = ocupado;
		}
	}

	// Segunda diagonal
	int sum = x+y;
	int x3, y3;
	if(sum < 7){
		x3 = sum;
		y3 = 0;
	}else{
		x3 = 7;
		y3 = sum -7;
	}

	for(int i=0;i<8;i++){
		int posX = x3-i;
		int posY = y3+i;
		if((posX < 8 && posX >= 0) 
		&& (posY < 8 && posY >= 0)){
			tablero[posX][posY] = ocupado;
		}
	}
}

void reinaPosicion(int x, int y){
	fijarRangoReina(x,y);
	tablero[x][y] = 'R';
}

void pintarTablero(){
	for(int i=0; i<8;i++){
		for(int j=0;j<8;j++){
			cout << tablero[i][j];
		}
		cout << "\n";
	}
}

void llenarTablero(){
	for(int i=0; i<8;i++){
		for(int j=0;j<8;j++){
			// Rellenar todo el tablero con el simbolo "Disponible"
			tablero[i][j] = disponible;
		}
	}
}

int main(){
	// Pedir al usuario la entrada por teclado para coordenadas
	cout << " Bienvenido!, Revisa la posición de la Reina en el tablero\n";
	do{
		cout << "Por favor ingrese una posición X valida [X][] \n"; 
		cout << "Por favor tenga en cuenta que el tablero de ajedrez comienza en 0 y termina en 7 \n";
		cin>> x;
		if(x>7 || x<0){
			cout << "Entrada invalida! \n"; 
		}else {
			cout << "Gracias! \n \n"; 
		}
	
	}while(x>7 || x<0);
   
		
	do{
		cout << "Ingrese la posicion Y [][Y] \n";
		
		cout << "Por favor tenga en cuenta que el tablero de ajedrez comienza en 0 y termina en 7 \n";
		cin>> y;
		if(y>7 || y<0){
			cout << "Valor Invalido! \n"; 
		}else {
			cout << "Gracias! \n \n"; 
		}
	}while(y>7 || y<0);
		
 
	cout << "Los posibles movimientos de la Reina son.... \n";
	llenarTablero(); 
	reinaPosicion(x,y); 
	pintarTablero(); 
	
	return 0;
}