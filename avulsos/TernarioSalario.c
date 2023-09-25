#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, salarioBruto;
    
    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    salarioBruto = salario > 1000 ? salario * 0.05 : salario * 0.10;

    printf("Salário Bruto = %.2f\n", salarioBruto);

    return 0;
}
