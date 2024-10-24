//
// Created by nava on 24/10/24.
//
#include "ListaDuplamenteLigada.h"

// variáveis
struct no *inicio = NULL;
struct no *novo = NULL;
struct no *aux = NULL;
struct no *anterior = NULL;
struct no *proximo = NULL;
struct no *noCorrente = NULL;

// funções
void inicializar() {
    inicio = NULL;
}

void finalizar(struct no *quem) {
    if(quem->proximo != NULL) {
        finalizar(quem->proximo);
    }
    free(quem);
}

struct no * novoNo(int dado) {
    struct no *p = malloc(sizeof(struct no));
    if(!p) {
        printf("Erro na alocacao de memoria!\n");
        exit(EXIT_FAILURE);
    }
    p->anterior = NULL;
    p->dado = dado;
    p->proximo = NULL;

    return p;
}

void adicionar(int dado) {
    novo = novoNo(dado);

    if(inicio == NULL) {
        inicio = novo;
    }
    else {
        if(novo->dado < inicio->dado) {
            adicionarNoInicio();
        }
        else {
            aux = inicio;
            while(aux->dado < novo->dado && aux->proximo != NULL) {
                aux = aux->proximo;
            }
            if(novo->dado > aux->dado) {
                adicionarNoFinal();
            }
            else {
                adicionarNoMeio();
            }
        }
    }
}

void adicionarNoInicio() {
    novo->proximo = inicio;
    inicio->anterior = novo;
    inicio = novo;
}

void adicionarNoFinal() {
    aux->proximo = novo;
    novo->anterior = aux;
}

void adicionarNoMeio() {
    anterior = aux->anterior;

    novo->proximo = aux;
    aux->anterior = novo;
    anterior->proximo = novo;
    novo->anterior = anterior;
}

void excluir(int dado) {
    if(inicio != NULL) {
        if(dado == inicio->dado) {
            excluirNoInicio();
        }
        else {
            aux = inicio;
            while(aux->dado != dado && aux->proximo != NULL) {
                aux = aux->proximo;
            }
            if(aux->dado == dado) {
                if(aux->proximo == NULL) {
                    excluirNoFinal();
                }
                else {
                    excluirNoMeio();
                }
            }
        }
    }
}

void excluirNoInicio() {
    if(inicio->proximo == NULL) {
        free(inicio);
        inicio = NULL;
    }
    else {
        aux = inicio;
        inicio = inicio->proximo;
        inicio->anterior = NULL;
        free(aux);
    }
}

void excluirNoFinal() {
    anterior = aux->anterior;

    anterior->proximo = NULL;
    free(aux);
}

void excluirNoMeio() {
    anterior = aux->anterior;
    proximo = aux->proximo;

    anterior->proximo = proximo;
    proximo->anterior = anterior;

    free(aux);
}

void paraInicio() {
    noCorrente = inicio;
}

void paraFinal() {
    noCorrente = inicio;
    while(noCorrente->proximo != NULL) {
        noCorrente = noCorrente->proximo;
    }
}

bool corrente(int *dado) {
    if(noCorrente == NULL) {
        return false;
    }
    *dado = noCorrente->dado;

    return true;
}

bool paraProximo() {
    if(noCorrente == NULL) {
        return false;
    }
    noCorrente = noCorrente->proximo;

    return true;
}

bool paraAnterior() {
    if(noCorrente == NULL) {
        return false;
    }
    noCorrente = noCorrente->anterior;

    return true;
}
