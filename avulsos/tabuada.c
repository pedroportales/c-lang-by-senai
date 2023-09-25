#include <stdio.h>
#include <stdlib.h>

/*Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9*/

int main(){
	for( int i = 1; i < 10; i++ ){
		for( int j = 1; j < 10; j++){
			printf("%d X %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
	
	return 0;
}
