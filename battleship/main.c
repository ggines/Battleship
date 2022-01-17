#include <stdio.h>
#define ROWS 10
#define COLS 11

void main() {
	//Tabla del jugador
	char playerTable[ROWS][COLS]={
			{1,0,0,0,0,0,0,0,0,0,0},
			{2,0,0,0,0,0,0,0,0,0,0}, {3,0,0,0,0,0,0,0,0,0,0},
			{4,0,0,0,0,0,0,0,0,0,0}, {5,0,0,0,0,0,0,0,0,0,0},
			{6,0,0,0,0,0,0,0,0,0,0}, {7,0,0,0,0,0,0,0,0,0,0},
			{8,0,0,0,0,0,0,0,0,0,0}, {9,0,0,0,0,0,0,0,0,0,0},
			{10,0,0,0,0,0,0,0,0,0,0}
	};
	//Nuestra tabla, dónde los 1 representan el barco
	char myTable[ROWS][COLS]={
			{1,0,0,1,0,0,0,0,0,0,0},
			{2,0,0,1,0,0,0,0,0,0,0}, {3,0,0,1,0,0,0,0,0,0,0},
			{4,0,0,0,0,0,0,0,0,0,0}, {5,0,0,0,0,0,0,0,0,0,0},
			{6,0,0,0,0,0,0,0,0,0,0}, {7,0,0,1,1,1,1,0,0,0,0},
			{8,0,0,0,0,0,0,0,0,0,0}, {9,0,0,0,0,0,0,0,0,0,0},
			{10,0,0,0,0,1,1,1,1,0,0}
	};
	int i, j;
	int x=0;
	int opcion, fila, columna;
	printf("**********BIENVENIDO AL JUEGO DE HUNDIR LA FLOTA**********\n");
	printf("**********************************************************\n");
	printf("***************Escoge un nivel de dificultad**************\n");
	printf("1- Facil\n");
	printf("2- Medio\n");
	printf("3- Alto\n");
	printf("4- Salir\n");
	scanf("%d", &opcion);
	//Mientras la opcion sea mayor que 4 o menor que 1 y la x sea menor que 3,
	//pide que se introduzca una opción válida.
	//De esta manera solo hay 3 intentos, hasta que la x valga 3 y el programa
	//se pare.
	while((opcion>4 || opcion<1) && x<3){
		printf("No has introducido una opción válida, vuelve a elegir: ");
		scanf("%d", &opcion);
		x=x+1;
	}
	//Para cada opción muestra la tabla del jugador y pide el numero de columna y fila.
	//Si en esa posición hay un 1, significa que ha tocado el barco.
	//En ese caso muestra la fila dónde se ha tocado, y si no, muestra nuestra tabla.
	switch (opcion){
		case 1: printf("   A  B  C  D  E  F  G  H  I  J \n");
				for(i=0;i<10;i++){
					for(j=0;j<11;j++){
						printf("%d  ", playerTable[i][j]);
					}
					printf("\n");
				}
				printf("Introduce el numero de columna: \n");
				scanf("%d", &columna);
				printf("Introduce un numero de fila: \n");
				scanf("%d", &fila);
				for(i=fila-1;i<10;){
					for(j=columna-1;j<11;){
						//printf("%d  ", myTable[i][j]);
						if (myTable[i][j]==1){
								printf("Las coordenadas %d y %d han tocado el barco\n", fila, columna);
								for(i=fila-1;i<10;){
									for(j=0;j<11;j++){
										printf("%d  ", myTable[i][j]);
									}
									printf("\n");
									break;
								}
						}else{
								printf("Las coordenadas %d y %d no han tocado el barco\n", fila, columna);
								printf("   A  B  C  D  E  F  G  H  I  J \n");
								for(i=0;i<10;i++){
									for(j=0;j<11;j++){
										printf("%d  ", myTable[i][j]);
									}
									printf("\n");
								}
						}
						break;
					}
					break;
				}
				break;
		case 2: printf("   A  B  C  D  E  F  G  H  I  J \n");
				for(i=0;i<10;i++){
					for(j=0;j<11;j++){
						printf("%d  ", playerTable[i][j]);
					}
					printf("\n");
				}
				printf("Introduce el numero de columna: \n");
				scanf("%d", &columna);
				printf("Introduce un numero de fila: \n");
				scanf("%d", &fila);
				for(i=fila-1;i<10;){
					for(j=columna-1;j<11;){
						if(myTable[i][j]==1){
							printf("Las coordenadas %d y %d han tocado el barco\n", fila, columna);
							for(i=fila-1;i<10;){
								for(j=0;j<11;j++){
									printf("%d  ", myTable[i][j]);
								}
								printf("\n");
								break;
							}
						}else{
							printf("Las coordenadas %d y %d no han tocado el barco\n", fila, columna);
							printf("   A  B  C  D  E  F  G  H  I  J \n");
							for(i=0;i<10;i++){
								for(j=0;j<11;j++){
									printf("%d  ", myTable[i][j]);
								}
								printf("\n");
							}
						}
						break;
					}
					break;
				}
				break;

		case 3: printf("   A  B  C  D  E  F  G  H  I  J \n");
				for(i=0;i<10;i++){
					for(j=0;j<11;j++){
						printf("%d  ", playerTable[i][j]);
					}
					printf("\n");
				}
				printf("Introduce el numero de columna: \n");
				scanf("%d", &columna);
				printf("Introduce un numero de fila: \n");
				scanf("%d", &fila);
				for(i=fila-1;i<10;){
					for(j=columna-1;j<11;){
						if(myTable[i][j]==1){
							printf("Las coordenadas %d y %d han tocado el barco\n", fila, columna);
							for(i=fila-1;i<10;){
								for(j=0;j<11;j++){
									printf("%d  ", myTable[i][j]);
								}
								printf("\n");
								break;
							}
						}else{
							printf("Las coordenadas %d y %d no han tocado el barco\n", fila, columna);
							printf("   A  B  C  D  E  F  G  H  I  J \n");
							for(i=0;i<10;i++){
								for(j=0;j<11;j++){
									printf("%d  ", myTable[i][j]);
								}
								printf("\n");
							}
						}
						break;
					}
					break;
				}
				break;

		case 4: printf("Has salido");
				break;
	}
}

