#include <stdio.h>

int main(void){

    float notas[3] = {0};
    float total = 0;

    for(int i = 0; i < 3; i++){
        printf("Insira a %dª/3 nota: ", i+1);
        scanf("%f", &notas[i]);
    }

    for(int i = 0; i < 3; i++){
        total += notas[i];
    }

    printf("A média do aluno é: %.2f\n", total / 3);
    

    return 0;
}
