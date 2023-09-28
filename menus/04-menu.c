#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
    Autor: Pedro Portales
    Data: 27/09/2023
*/

void posicaoDoMaior(){
    /* Dada uma seqüência numérica de 20 elementos armazenados num vetor,
    determinar o índice (posição) do maior elemento do conjunto. Suponha que os
    elementos sejam distintos. */

    int sequencia[20], maior = 0, posicao;

    printf("\n\n");

    for(int i = 0; i < 20; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &sequencia[i]);

        if(sequencia[i] > maior){
            maior = sequencia[i];
            posicao = i;
        }
    }

    printf("O maior número digitado foi %d, na posição %d no vetor.\n", maior, posicao);
    printf("\n\n");
}

void positivoImpar(){
    /* Elabore um algoritmo que leia um vetor de 10 posições
    e imprima quantos números são positivos e quantos são ímpar. */

    int vet[10], positivo = 0, impar = 0;

    printf("\n\n");

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &vet[i]);

        if(vet[i] > 0){
            positivo++;
        } if(vet[i] % 2 == 0){
            impar++;
        }
    }

    printf("Positivos: %d\n", positivo);
    printf("Ímpares: %d\n", impar);
    printf("\n\n");
}

void somaMediaQuantidade(){
    /*Elabore um algoritmo que leia um vetor de 6 posições
    e mostre a soma, a média e a quantidade de números menores que 10.*/

    int vet[6], soma = 0, menor10 = 0;

    printf("\n\n");

    for(int i = 0; i < 6; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &vet[i]);
        soma++;

        if(vet[i] < 10){
            menor10++;
        }
    }

    printf("A soma dos valores é: %d\n", soma);
    printf("A média dos valores é: %d\n", soma/6);
    printf("Quantidade de números menores que 10: %d\n", menor10);
    printf("\n\n");
}

void procurarNoVetor(){
    /* Elabore um algoritmo que armazene 10 valores inteiros em um vetor.
    Depois solicite ao usuário para digitar um valor e procure no vetor esse valor.
    Se encontrar informar em quais casas esses números estão,
    se não encontrar informar não encontrado.*/

    int vet[10], valor;
    bool verificacao;

    printf("\n\n");

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &vet[i]);
    }

    printf("Digite um valor: ");
    scanf("%d", &valor);

    for(int i = 0; i < 10; i++){
        if(vet[i] == valor){
            printf("O valor está na posição %d do vetor.\n", i);
            verificacao = true;
            break;
        } else {
            verificacao = false;
        }
    }

    if(verificacao == false){
        printf("Valor não encontrado no vetor.");
    }

    printf("\n\n");
}

int main(void){
    int i = 0;
    
    while(i != 5){
        printf("----- MENU -----\n");
        printf("(1) Posição do Maior\n");
        printf("(2) Positivo Ímpar\n");
        printf("(3) Soma, média e quantidade\n");
        printf("(4) Procurar no vetor\n");
        printf("(5) Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &i);

        switch(i){
            case 1:
                posicaoDoMaior();
                break;
            case 2:
                positivoImpar();
                break;
            case 3:
                somaMediaQuantidade();
                break;
            case 4:
                procurarNoVetor();
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
