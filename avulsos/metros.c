#include <stdio.h>
#include <stdlib.h>

/* Fazer um programa em C que pergunta um valor em metros e imprime o correspondente 
em decímetros, centímetros e milímetros. */

int main(){ 
	float metro;
	
	printf("Escreva o valor em metros: ");
	scanf("%f", &metro);
	
	printf("Metros: %.2f\n", metro);
	printf("Decimetros: %.2f\n", metro/10);
	printf("Centimetros: %.2f\n", metro/100);
	printf("Milimetros: %.2f\n", metro/1000);
	
	return 0;
}