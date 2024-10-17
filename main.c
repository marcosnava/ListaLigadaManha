#include <stdio.h>

#include "ListaLigada.h"

// Constantes
enum {
    OP_NAO_SELECIONADA = 0,
    OP_ADICIONAR,
    OP_EXCLUIR,
    OP_LISTAR,
    OP_SAIR
};

// Variáveis

// Protótipos
int menu();
void imprimir();

int main(void)
{
    int opcao = OP_NAO_SELECIONADA;
    int valor = 0;

    inicializar();

    while(opcao != OP_SAIR) {
        opcao = menu();

        switch (opcao) {
            case OP_ADICIONAR:
                printf("Digite um numero: ");
                scanf("%d", &valor);
                adicionar(valor);
                break;
            case OP_EXCLUIR:
                printf("Digite um numero: ");
                scanf("%d", &valor);
                excluir(valor);
                break;
            case OP_LISTAR:
                imprimir();
                break;
            case OP_SAIR:
                break;
            default:
                printf("Opcao Invalida!\n");
        }
    }

    if(inicio != NULL) {
        finalizar(inicio);
    }

    return EXIT_SUCCESS;
}

int menu() {
    int op = OP_NAO_SELECIONADA;
    printf("Menu\n");
    printf("%d - Adicionar\n", OP_ADICIONAR);
    printf("%d - Excluir\n", OP_EXCLUIR);
    printf("%d - Imprimir\n", OP_LISTAR);
    printf("%d - Sair\n", OP_SAIR);
    printf("Digite sua opcao: ");
    scanf("%d", &op);

    return op;
}

void imprimir() {
    int valor = 0;
    if(inicio != NULL) {
        paraInicio();
        while(corrente(&valor)) {
            printf("%d ",valor);
            paraProximo();
        }
        printf("\n");
    }
}
