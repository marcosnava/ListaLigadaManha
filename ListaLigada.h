//
// Created by nava on 17/10/24.
//

#ifndef LISTALIGADA_H
#define LISTALIGADA_H
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Constantes
struct no {
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
bool corrente(int *dado);
bool paraProximo();

#endif //LISTALIGADA_H
