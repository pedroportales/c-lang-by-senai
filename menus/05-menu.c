#include <stdio.h>
/*
    Autor: Pedro Portales
    Data: 02/10/2023
*/


void entre10e150() {
    int numeros[50];
    int contador = 0;
    int soma = 0;

    printf("\n\n");

    printf("Digite 50 números inteiros:\n");

    for(int i = 0; i < 50; i++){
        scanf("%d", &numeros[i]);
        if (numeros[i] >= 10 && numeros[i] <= 150) {
            soma += numeros[i];
            contador++;
        }
    }

    if(contador > 0){
        float media = (float)soma / contador;
        printf("A média dos números no intervalo entre 10 e 150 é: %.2f\n", media);
    } else {
        printf("Nenhum número no intervalo entre 10 e 150 foi inserido.\n");
    }
    printf("\n\n");
}

void idadeDe100(){
    int idade;
    int menores = 0;
    int maiores = 0;
    int somaIdades = 0;

    printf("\n\n");

    printf("Informe a idade de 100 pessoas:\n");

    for(int i = 1; i <= 100; i++) {
        printf("Pessoa %d: ", i);
        scanf("%d", &idade);

        if(idade < 18) {
            menores++;
        } else{
            maiores++;
            somaIdades += idade;
        }
    }

    printf("Quantidade de pessoas menores de idade: %d\n", menores);

    if(maiores > 0){
        float mediaIdades = (float)somaIdades / maiores;
        printf("Média das idades das pessoas maiores de idade: %.2f\n", mediaIdades);
    } else{
        printf("Nenhuma pessoa maior de idade foi registrada.\n");
    }

    printf("\n\n");
}

void quadradoCubo(){
    int tam = 10;
    int valores[tam];
    int cubo[tam];
    int quadrado[tam];

    printf("\n\n");

    printf("Digite 10 valores inteiros:\n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &valores[i]);
    }

    for(int i = 0; i < tam; i++){
        cubo[i] = valores[i] * valores[i] * valores[i];
        quadrado[i] = valores[i] * valores[i];
    }

    printf("\nValores originais:\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", valores[i]);
    }

    printf("\nCubo dos valores:\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", cubo[i]);
    }

    printf("\nQuadrado dos valores:\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", quadrado[i]);
    }

    printf("\n\n\n");
}

void menorValor(){
    int vetor[10];
    int menor;

    printf("\n\n");

    printf("Digite 10 valores inteiros:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];

    // Encontrar o menor valor no vetor
    for(int i = 1; i < 10; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    // Mostrar o menor valor
    printf("O menor valor no vetor é: %d\n", menor);

    printf("\n\n");

}

void menorValorProcurando(){
    int vetor[10];
    int numeroProcurado;

    printf("\n\n");

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número a ser procurado: ");
    scanf("%d", &numeroProcurado);

    int encontrado = 0;
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == numeroProcurado) {
            printf("O número %d foi encontrado na posição %d do vetor.\n", numeroProcurado, i);
            encontrado = 1;
            break;
        }
    }

    if (encontrado != 1) {
        printf("O número %d não foi encontrado no vetor.\n", numeroProcurado);
    }

    printf("\n\n");
}

void vetorInvertido(){
    int original[10];
    int invertido[10];

    printf("\n\n");

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &original[i]);
    }

    for (int i = 0; i < 10; i++) {
        invertido[i] = original[9 - i];
    }

    printf("Vetor Original:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", original[i]);
    }

    printf("\nVetor Invertido:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", invertido[i]);
    }

    printf("\n\n\n");

}

int main(void){
    int i = 0;
    
    while(i != 7){
        printf("----- MENU -----\n");
        printf("(1) Entre 10 e 150\n");
        printf("(2) Idade de 100 pessoas\n");
        printf("(3) Quadrado e Cubo\n");
        printf("(4) Menor valor\n");
        printf("(5) Menor valor procurado\n");
        printf("(6) Vetor invertido\n");
        printf("(7) Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &i);

        switch(i){
            case 1:
                entre10e150();
                break;
            case 2:
                idadeDe100();
                break;
            case 3:
                quadradoCubo();
                break;
            case 4:
                menorValor();
                break;
            case 5:
                menorValorProcurando();
                break;
            case 6:
                vetorInvertido();
                break;
            case 7:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Valor inválido. Tente novamente\n\n");
        }
    }

    return 0;
}
