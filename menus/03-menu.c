#include <stdio.h>
#include <stdlib.h>

void vetorDe10Valores(){
    /* Elabore um algoritmo que guarde 10 valores inteiros em um vetor */

    printf("\n\n");

    int valores[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº número: ");
        scanf("%d", &valores[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("O %dº valor é: %d\n", i, valores[i]);
    }

    printf("\n\n");
}

void NumerosPares(){
    /* Elabore um algoritmo que leia um vetor de 10 posições
    e imprima a quantidade de números pares */

    printf("\n\n");
    
    int valores[10], pares = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº número: ");
        scanf("%d", &valores[i]);

        if(valores[i] % 2 == 0){
            pares++;
        }
    }

    printf("Dos valores digitados, %d são pares.\n", pares);

    printf("\n\n");
}

void somaDosImpares(){
    /* Elabore um algoritmo que leia um vetor de 6 posições
    e mostre a soma dos números ímpares */
    int valores[6], soma = 0;

    printf("\n\n");

    for(int i = 0; i < 6; i++){
        printf("Digite o %dº número: ");
        scanf("%d", &valores[i]);

        if(valores[i] % 2 != 0){
            soma += valores[i];
        }
    }

    printf("A soma dos valores ímpares digitados é igual a: %d\n", soma);

    printf("\n\n");
}

void posicaoDosPares(){
    int valores[20];

    printf("\n\n");

    for(int i = 0; i < 20; i++){
        printf("Digite o %dº número: ");
        scanf("%d", &valores[i]);

        if(valores[i] % 2 == 0){
            printf("Esse número está na posição %d\n", i);
        }
    }

    printf("\n\n");
}

int main(void){
    int i;
    
    while(i != 5){
        printf("----- MENU -----\n");
        printf("(1) Contar de 1 a 100\n");
        printf("(2) Contar de 1 a 100 e emitir uma mensagem a cada múltiplo de 10\n");
        printf("(3) Ler números entre 1 a 10\n");
        printf("(4) Ler número até que ele seja 0\n");
        printf("(5) Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &i);

        switch(i){
            case 1:
                vetorDe10Valores();
                break;
            case 2:
                NumerosPares();
                break;
            case 3:
                somaDosImpares();
                break;
            case 4:
                posicaoDosPares();
                break;
            case 5:
                printf("Fechando programa...\n");
                break;
            default:
                printf("Valor inválido. Tente novamente\n\n");
        }
    }

    return 0;
}
