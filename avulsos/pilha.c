#include <stdio.h>
#include <stdio.h>

typedef struct pilha
{
    int dado;
    struct pilha *prox
} celula;

void imprimir();
void push(int);
void pop();

celula *top = NULL;

int main(int argc, char const *argv[])
{
    int n, opcao;

    do
    {
        printf("---- MENU ----\n");
        printf("1. Empilhar\n2. Desempilhar\n3. Imprimir\n4. Sair do programa\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Entre com um valor para ser empilhado: ");
            scanf("%d", &n);
            push(n);
            break;
        case 2:
            pop(n);
            break;
        case 3:
            imprimir();
            break;
        case 4:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida.");
            break;
        }
    } while (opcao != 4);
    
    return 0;
}

void push(int item)
{
    printf("\n===========================");
    printf("\n=========EMPILHANDO========\n");
    celula *novo = malloc(sizeof(celula));
    novo->dado = item;
    novo->prox = top;
    top = novo;
    printf("\nValor %d empilhado", novo->dado);
    printf("\n===========================");
}

void pop()
{
    printf("\n===========================");
    printf("\n=======DESEMPILHANDO=======\n");
    if (top = NULL)
    {
        printf("\n\nA pilha está vazia ");
    }
    else
    {
        celula *temp;
        temp = top;
        top = top->prox;
        printf("\n\n%d desempilhado", temp->dado);
        free(temp);
    }
    printf("\n===========================");
}

void imprimir()
{
    celula *temp;
    temp = top;
    printf("\n===========================");
    printf("\n=========IMPRIMINDO========\n");
    while (temp != NULL)
    {
        printf("\n%d", temp->dado);
        temp = temp->prox;
    }
    printf("\n===========================");    
}
