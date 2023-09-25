#include <stdio.h>
#include <stdlib.h>

/* - Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os
entrevistados: idade e quantidade de livros que leu no ano de 2016. Faça um programa
que leia os dados de 100 pessoas, calcule e imprima:
a) A quantidade de pessoas que leram 5 livros ou mais.
b) A média de idade das pessoas que leram menos que 5 livros.
c) A quantidade total de livros lidos pelos entrevistados menores de 10 anos. */

int main(void){
    
    int idade, qtdLivros;
    int maisDe5 = 0, menosDe5 = 0;
    int totalIdade = 0, totalLivros = 0;

    for(int i = 0; i < 100; i++){
        printf("Digite a idade da %dª pessoa: ", i+1);
        scanf("%d", &idade);
        printf("Digite a quantidade de livros lidos pela %dª pessoa em 2016: ", i+1);
        scanf("%d", &qtdLivros);

        if(qtdLivros >= 5){
            maisDe5++;
        } if (idade < 10) {
            totalLivros += qtdLivros;
        } if (qtdLivros < 5) {
            totalIdade += idade;
            menosDe5++;
        }
       
    }

    printf("A quantidade de pessoas que leram 5 livros ou mais: %d\n", maisDe5);
    printf("A média de idade das pessoas que leram menos que 5 livros: %.2f\n", totalIdade / menosDe5);
    printf(" A quantidade total de livros lidos pelos entrevistados menores de 10 anos: %d\n", totalLivros);


    return 0;
    
}