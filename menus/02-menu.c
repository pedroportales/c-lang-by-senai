#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
Autor: Pedro Portales
*/

void contar1a100(){
    /* Faça um algoritmo que conte de 1 a 100 */
    printf("\n\n");

    for(int i = 0; i < 100; i++){
        printf("%d\n", i+1);
    }

    printf("\n\n");
    
}

void contar1a100MultiploDe10(){
    /* Faça um algoritmo que conte de 1 a 100 e a cada múltiplo de 10  emita
    uma mensagem: “Múltiplo de 10”. */

    printf("\n\n");

    for(int i = 0; i < 100; i++){
        printf("%d\n", i+1);

        if((i+1) % 10 == 0){
            printf("%d é múltiplo de 10!!\n", i+1);
        } else { printf("%d\n", i+1); }
    }

    printf("\n\n");
    
}

void lerDe1a10(){
    /* Faça um algoritmo que leia números entre 1 e 10, se for digitado  um
    número maior que 10 ou menor que 1 saia encerre o algoritmo */

    int numero = 1;

    printf("\n\n");

    while(numero >= 1 && numero <= 10){
        printf("Digite um número entre 1 e 10: ");
        scanf("%d", &numero);        
    }

    printf("%d não está dentro dos requisitos pedidos\n", numero);
    printf("Saindo do exercício...\n");

    printf("\n\n");
    
}

void pararNo0(){
    /* Faça um algoritmo que determine o maior entre N números. A  condição de
    parada é a entrada de um valor 0, ou seja, o algoritmo  deve ficar
    calculando o maior até que a entrada seja igual a 0  (ZERO). */

    int numero, maiorNumero = 0;

    printf("\n\n");

    while(true){
        printf("Digite um valor: ");
        scanf("%d", &numero);

        if(numero == 0){
            printf("O maior número é: %d\n", maiorNumero);
            break;
        } else if(numero > maiorNumero){
            maiorNumero = numero;
        }
        
    }

    printf("\n\n");
    
}

void tabuada1a10(){
    /* Faça um algoritmo que imprima a tabuada de multiplicação de 1 a 10 */
    printf("\n\n");

    for( int i = 1; i <= 10; i++ ){
		for( int j = 1; j < 10; j++){
			printf("%d X %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}

    printf("\n\n");
    
}

void tabuadaEntre2Numeros(){
    /* Faça um algoritmo que imprima a tabuada de multiplicação entre 2 números que o usuário escolher. */
    int num1, num2, maiorNumero, menorNumero;

    printf("\n\n");

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
    printf("\n");

    if(num1 > num2){
        maiorNumero = num1;
        menorNumero = num2;
    } else {
        maiorNumero = num2;
        menorNumero = num1;
    }

    for( menorNumero; menorNumero <= maiorNumero; menorNumero++ ){
        for( int j = 1; j <= 10; j++){
            printf("%d X %d = %d\n", menorNumero, j, menorNumero*j);
        }
        printf("\n");
    }

    printf("\n\n");
    
}


int main(void){
    int i;
    
    while(i != 7){
        printf("----- MENU -----\n");
        printf("(1) Contar de 1 a 100\n");
        printf("(2) Contar de 1 a 100 e emitir uma mensagem a cada múltiplo de 10\n");
        printf("(3) Ler números entre 1 a 10\n");
        printf("(4) Ler número até que ele seja 0\n");
        printf("(5) Tabuada de 1 a 10\n");
        printf("(6) Tabuada entre 2 números\n");
        printf("(7) Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &i);

        switch(i){
            case 1:
                contar1a100();
                break;
            case 2:
                contar1a100MultiploDe10();
                break;
            case 3:
                lerDe1a10();
                break;
            case 4:
                pararNo0();
                break;
            case 5:
                tabuada1a10();
                break;
            case 6:
                tabuadaEntre2Numeros();
                break;
            case 7:
                printf("Fechando programa...\n");
                break;
            default:
                printf("Valor inválido. Tente novamente\n\n");
        }
    }

    return 0;
}
