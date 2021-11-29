#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;


void setQueenRange(char tablero[][8], int x, int y){

	const char occupied = '+';
	// Horizontal Range with horizontal value (x)
	cout << "Horizontal: \n";
	for(int j=0; j<8;j++ ){
		cout << "(" << x << "," << j <<")\n";
		tablero[x][j] = occupied;
	}

	// Vertical Range with vertical value (y)
	cout << "Vertical: \n";
	for(int i=0; i<8;i++ ){
		cout << "(" << i << "," << y <<") \n";
		tablero[i][y] = occupied;
	}

	// First Diagonal
	cout << "Diagonal 1: \n";
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
			cout << "(" << x2+i << "," << y2+i <<") \n";
			tablero[x2+i][y2+i] = occupied;
		}else{
			cout << "rejected: ";
			cout << "(" << x2+i << "," << y2+i <<") \n";

		}
	}

	// Second Diagonal
	int sum = x+y;
	int x3, y3;
	if(sum < 7){
		cout << "Sum < 7 is:" << sum << "\n";
		x3 = sum;
		y3 = 0;
	}else{
		cout << "Sum >= 7 is:" << sum << "\n";
		x3 = 7;
		y3 = sum -7;
	}

	cout << "Diagonal 2: \n";

	for(int i=0;i<8;i++){
		int posX = x3-i;
		int posY = y3+i;
		if((posX < 8 && posX >= 0) && (posY < 8 && posY >= 0)){
			cout << "(" << posX << "," << posY <<") \n";
			tablero[posX][posY] = occupied;
		}else{
			cout << "rejected: ";
			cout << "(" << posX << "," << posY <<") \n";
		}
	}
}

void positionQueen(char tablero[][8], int x, int y){
	setQueenRange(tablero,x,y);
	tablero[x][y] = 'R';
}

void printBoard(char tablero[][8]){
	for(int i=0; i<8;i++){
		for(int j=0;j<8;j++){
			cout << tablero[i][j];
		}
		cout << "\n";
	}
}

int main(){

	const char free = '-';

	int fila, col; 
	char tablero[8][8];

	for(int i=0; i<8;i++){
		for(int j=0;j<8;j++){
			// Rellenar todo el tablero con el simbolo "Disponible"
			tablero[i][j] = free;
		}
	}

	// TODO: Pedir entrada por teclado para coordenadas

	positionQueen(tablero, 5,8);
	printBoard(tablero);
	
	return 0;
}