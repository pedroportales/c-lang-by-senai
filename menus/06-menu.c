#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define TAM 3

struct Idade {
    int anos;
    int meses;
    int dias;
};

struct Hora {
    int horas;
    int minutos;
};

int main(void) {

    // Funções
    double exercicio01(double n[TAM], char c);
    bool exercicio02(int n);
    int exercicio03(struct Idade pessoa);
    bool exercicio04(int valor);
    void exercicio05(struct Hora inicio, struct Hora termino, struct Hora *duracao);
    int exercicio06(int valor);

    // Variáveis
    int opt, num, numero;
    double nota[TAM];
    char mediaopt;

    struct Idade pessoa;
    struct Hora inicio, termino, duracao;

                
    
    while(opt != 7){
        printf("----- MENU -----\n");
        printf("(1) Entre 10 e 150\n");
        printf("(2) Idade de 100 pessoas\n");
        printf("(3) Quadrado e Cubo\n");
        printf("(4) Menor valor\n");
        printf("(5) Menor valor procurado\n");
        printf("(6) Vetor invertido\n");
        printf("(7) Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opt);

        switch(opt){
            case 1:
                exercicio01(nota, mediaopt);
                break;
            case 2:
                printf("Digite um número: ");
                scanf("%d", &num);
                bool primo = exercicio02(num);
                printf("É primo: %s", primo ? "true" : "false");
                break;
            case 3:
                printf("Digite a idade em anos, meses e dias:\n");
                printf("Anos: ");
                scanf("%d", &pessoa.anos);
                printf("Meses: ");
                scanf("%d", &pessoa.meses);
                printf("Dias: ");
                scanf("%d", &pessoa.dias);
                int resultado = exercicio03(pessoa);
                printf("A idade em dias é: %d dias\n", resultado);
                break;
            case 4:
                printf("Digite um número: ");
                scanf("%d", &numero);

                if (exercicio04(numero)) {
                    printf("O número é positivo.\n");
                } else {
                    printf("O número é negativo.\n");
                }
                break;
            case 5:
                printf("Digite a hora de inicio do jogo (horas minutos): ");
                scanf("%d %d", &inicio.horas, &inicio.minutos);

                // Solicita ao usuário que insira a hora de término do jogo
                printf("Digite a hora de termino do jogo (horas minutos): ");
                scanf("%d %d", &termino.horas, &termino.minutos);

                // Chama a função para calcular a duração do jogo
                exercicio05(inicio, termino, &duracao);

                // Exibe o resultado
                printf("A duração do jogo é: %d horas e %d minutos\n", duracao.horas, duracao.minutos);
                break;
            case 6:
                printf("Digite um valor inteiro e positivo: ");
                scanf("%d", &numero);

                // Chama a função e exibe o resultado
                resultado = exercicio06(numero);

                if (resultado != -1) {
                    printf("O somatório de 1 até %d é: %d\n", numero, resultado);
                }
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

double exercicio01(double n[TAM], char c) {
    /*Escreva uma função que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for A o procedimento calcula a
    média aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for H, a sua média harmônica.
    A média calculada também deve retornar por parâmetro.*/
    
    double soma = 0, media;

    if (c == 'A' || c == 'a') {
        // média aritmética simples
        for (int i = 0; i < TAM; i++) {
            soma += n[i];
        }

        media = soma / TAM;

    } else if (c == 'P' || c == 'a') {
        // média aritmética ponderada
        for (int i = 0; i < TAM; i++) {
            switch (i) {
                case 0:
                    soma += n[i] * 5;
                    break;
                case 1:
                    soma += n[i] * 3;
                    break;
                case 2:
                    soma += n[i] * 2;    
            }
        }

        media = soma / TAM;

    } else if (c == 'H' || c == 'h') {
        // média harmônica
        for (int i = 0; i < TAM; i++) {
            soma += pow(n[i], -1);
        }

        media = TAM / soma;
    }

    return media;

}

bool exercicio02(int n) {
    /*Faça uma função que recebe por parâmetro um valor inteiro
    e positivo e retorna o valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário.*/

    bool retorno;
    int resultado;

    for (int i = 0; i < n; i++) {
        if ( n != 1 && i != n && i % n != 0 ){
            resultado++;
        }
    }

    if (resultado != 0) {
        retorno  = true;
    } else { retorno = false; }

    return retorno;
}

int exercicio03(struct Idade pessoa) {
    int diasDoAno = 365;

    int idadeEmDias = pessoa.anos * diasDoAno + pessoa.meses * 30 + pessoa.dias;

    return idadeEmDias;
}

bool exercicio04(int valor) {
    return (valor >= 0);
}

void exercicio05(struct Hora inicio, struct Hora termino, struct Hora *duracao) {
    // Calcula a diferença em minutos
    int minutosInicio = inicio.horas * 60 + inicio.minutos;
    int minutosTermino = termino.horas * 60 + termino.minutos;
    int diferencaMinutos = (minutosTermino - minutosInicio + 24 * 60) % (24 * 60);

    // Converte a diferença de minutos de volta para horas e minutos
    duracao->horas = diferencaMinutos / 60;
    duracao->minutos = diferencaMinutos % 60;
}

int exercicio06(int valor) {
    int resultado = 0;

    if (valor <= 0) {
        printf("Por favor, insira um valor inteiro e positivo.\n");
        return -1;  // Indicar um erro
    }

    for (int i = 1; i <= valor; i++) {
        resultado += i;
    }

    return resultado;
}
