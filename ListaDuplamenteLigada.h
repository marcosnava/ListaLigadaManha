//
// Created by nava on 24/10/24.
//

#ifndef LISTADUPLAMENTELIGADA_H
#define LISTADUPLAMENTELIGADA_H
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Constantes
struct no {
    struct no *anterior;
    int dado;
    struct no *proximo;
};

// Variáveis
extern struct no *inicio;
extern struct no *novo;
extern struct no *aux;
extern struct no *anterior;
extern struct no *proximo;
extern struct no *noCorrente;

// Protótipos
void inicializar();
void finalizar(struct no *quem);
struct no *novoNo(int dado);
void adicionar(int dado);
void adicionarNoInicio();
void adicionarNoFinal();
void adicionarNoMeio();
void excluir(int dado);
void excluirNoInicio();
void excluirNoFinal();
void excluirNoMeio();

void paraInicio();
void paraFinal();
bool corrente(int *dado);
bool paraProximo();
bool paraAnterior();
#endif //LISTADUPLAMENTELIGADA_H
