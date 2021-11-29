#include <cstdio>
#include <iostream>
#include <algorithm>
int color (int n);
using namespace std;
int x, y; 
char tablero[8][8];
const char available = '-', occupied = '+';
void setQueenRange(int x, int y){

	// Horizontal Range with horizontal value (x)
	for(int j=0; j<8;j++){
		tablero[x][j] = occupied;
	}

	// Vertical Range with vertical value (y)
	for(int i=0; i<8;i++ ){
		tablero[i][y] = occupied;
	}

	// First Diagonal
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
			tablero[x2+i][y2+i] = occupied;
		}
	}

	// Second Diagonal
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
			tablero[posX][posY] = occupied;
		}
	}
}

void positionQueen(int x, int y){
	setQueenRange(x,y);
	tablero[x][y] = 'R';
}

void printBoard(){
	for(int i=0; i<8;i++){
		for(int j=0;j<8;j++){
			cout << tablero[i][j];
		}
		cout << "\n";
	}
}

void fillBoard(){
	for(int i=0; i<8;i++){
		for(int j=0;j<8;j++){
			// Rellenar todo el tablero con el simbolo "Disponible"
			tablero[i][j] = available;
		}
	}
}

int main(){
	// TODO: Pedir entrada por teclado para coordenadas
    cout << "Welcome to review YourQueen Chess Position \n";
   	 do{
		 
		 cout << "Please enter a valid X position [X][] \n"; 
		 cout << "Please be aware that this Chess Board starts from 0 and ends to 7 \n";
     cin>> x;
			if(x>7 || x<0){
				cout << "Invalid Entry! \n"; 
			}
			
		}while(x>7 || x<0);
   
		
		do{
	  cout << "Enter the Y position [][Y] \n";
		
		cout << "Please be aware that this Chess Board starts from 0 and ends to 7 \n";
    cin>> y;
    if(y>7 || y<0){
				cout << "Invalid Entry! \n"; 
			}
		}while(y>7 || y<0);
		
  cout << "Thanks! \n";
	cout << "The posible Queen movements are.... \n";
	fillBoard();
	positionQueen(x,y);
	printBoard();
	
	return 0;
}