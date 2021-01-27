#include <stdio.h>
#include "juegoGato.h"
#include <stdlib.h>

int main(){	
	//variables
	char tablero[3][3];
    int fila;	       
    int columna;
    bool ganador = false; //false = 0
    int turnos = 0;
   //inicia el juego
	NombreDelJuego();	                 
	llenarTablero(tablero);
	Tablero(tablero);
	while (ganador == false){
	    do{	
	ingresarJugada(&fila , &columna, turnos);
	 }while(tablero[fila][columna] != '-');
	 system("cls");
	    if(turnos%2 == 0){
        tablero[fila][columna] = 'X';
       }else{
		    tablero[fila][columna] = 'O';
		   }
    Tablero(tablero);
    ganador = revisarGanador(tablero);
    turnos++;
    }
    system("pause");
	return 0;
	}


