//implementaciones

#include "juegoGato.h"
#include <stdio.h>


void llenarTablero(char tablero[3][3]){
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			tablero[i][j]='-';
			}
		}
	}
	
void Tablero(char tablero[3][3]){
	printf("%c | %c | %c \n", tablero[0][0], tablero[0][1], tablero[0][2]);
	printf("----------\n");
	printf("%c | %c | %c \n", tablero[1][0], tablero[1][1], tablero[1][2]);
	printf("----------\n");
	printf("%c | %c | %c \n", tablero[2][0], tablero[2][1], tablero[2][2]);
		}	
		
void ingresarJugada(int* fila, int* columna,int turnos){
	jugador(turnos);
	printf("Ingrese la fila:\n");
	scanf("%d", fila);
	jugador(turnos);
	printf("Ingrese la columna:\n");
	scanf("%d", columna);
	}		
		
bool revisarGanador(char tablero[3][3]){
	if( (tablero[0][0]==tablero[0][1]) && (tablero[0][1]==tablero[0][2]) && (tablero[0][0] != '-') ){
		printf("Ganador en la fila 1.\n");
		return true;
		}
    if( (tablero[1][0]==tablero[1][1]) && (tablero[1][1]==tablero[1][2]) && (tablero[1][0] != '-') ){
		printf("Ganador en la fila 2.\n");
		return true;
		}
	if( (tablero[2][0]==tablero[2][1]) && (tablero[2][1]==tablero[2][2]) && (tablero[2][0] != '-') ){
		printf("Ganador en la fila 3.\n");
		return true;
		}
	if( (tablero[0][0]==tablero[1][0]) && (tablero[1][0]==tablero[2][0]) && (tablero[0][0] != '-') ){
		printf("Ganador en la columna 1\n");
		return true;
		}	
	if( (tablero[0][1]==tablero[1][1]) && (tablero[1][1]==tablero[2][1]) && (tablero[0][1] != '-') ){
		printf("Ganador en la columna 2.\n");
		return true;
		}	
	if( (tablero[0][2]==tablero[1][2]) && (tablero[1][2]==tablero[2][2]) && (tablero[0][2] != '-') ){
		printf("Ganador en la columna 3.\n");
		return true;
		}	
	if( (tablero[0][0]==tablero[1][1]) && (tablero[1][1]==tablero[2][2]) && (tablero[0][0] != '-') ){
		printf("Ganador en una de las diagonales.\n");
		return true;
		}	
	if( (tablero[0][2]==tablero[1][1]) && (tablero[1][1]==tablero[2][0]) && (tablero[0][2] != '-') ){
		printf("Ganador en una de las diagonales.\n");
		return true;
		}
		return false;
		}		
void NombreDelJuego(){
	printf("Gato.\n");
	}	
void jugador(int turnos){
	if(turnos%2 == 0){
			printf("Jugador X - ");
			} else {
				printf("Jugador O - ");
				}
	}
