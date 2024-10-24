//
// Created by nava on 17/10/24.
//

// #include "ListaLigada.h"
//
// // variáveis
// struct no *inicio = NULL;
// struct no *novo = NULL;
// struct no *aux = NULL;
// struct no *anterior = NULL;
// struct no *proximo = NULL;
// struct no *noCorrente = NULL;
//
// // funções
// void inicializar() {
//     inicio = NULL;
// }
//
// void finalizar(struct no *quem) {
//     if(quem->proximo != NULL) {
//         finalizar(quem->proximo);
//     }
//     free(quem);
// }
//
// struct no * novoNo(int dado) {
//     struct no *p = malloc(sizeof(struct no));
//     if(!p) {
//         printf("Erro na alocacao de memoria!\n");
//         exit(EXIT_FAILURE);
//     }
//     p->dado = dado;
//     p->proximo = NULL;
//
//     return p;
// }
//
// void adicionar(int dado) {
//     novo = novoNo(dado);
//
//     if(inicio == NULL) {
//         inicio = novo;
//     }
//     else {
//         if(novo->dado < inicio->dado) {
//             adicionarNoInicio();
//         }
//         else {
//             aux = inicio;
//             anterior = inicio;
//             while(aux->dado < novo->dado && aux->proximo != NULL) {
//                 anterior = aux;
//                 aux = aux->proximo;
//             }
//             if(novo->dado > aux->dado) {
//                 adicionarNoFinal();
//             }
//             else {
//                 adicionarNoMeio();
//             }
//         }
//     }
// }
//
// void adicionarNoInicio() {
//     novo->proximo = inicio;
//     inicio = novo;
// }
//
// void adicionarNoFinal() {
//     aux->proximo = novo;
// }
//
// void adicionarNoMeio() {
//     novo->proximo = aux;
//     anterior->proximo = novo;
// }
//
// void excluir(int dado) {
//     if(inicio != NULL) {
//         if(dado == inicio->dado) {
//             excluirNoInicio();
//         }
//         else {
//             aux = inicio;
//             anterior = inicio;
//             while(aux->dado != dado && aux->proximo != NULL) {
//                 anterior = aux;
//                 aux = aux->proximo;
//             }
//             if(aux->dado == dado) {
//                 if(aux->proximo == NULL) {
//                     excluirNoFinal();
//                 }
//                 else {
//                     excluirNoMeio();
//                 }
//             }
//         }
//     }
// }
//
// void excluirNoInicio() {
//     if(inicio->proximo == NULL) {
//         free(inicio);
//         inicio = NULL;
//     }
//     else {
//         aux = inicio;
//         inicio = inicio->proximo;
//         free(aux);
//     }
// }
//
// void excluirNoFinal() {
//     anterior->proximo = NULL;
//     free(aux);
// }
//
// void excluirNoMeio() {
//     proximo = aux->proximo;
//
//     anterior->proximo = proximo;
//     free(aux);
// }
//
// void paraInicio() {
//     noCorrente = inicio;
// }
//
// bool corrente(int *dado) {
//     if(noCorrente == NULL) {
//         return false;
//     }
//     *dado = noCorrente->dado;
//
//     return true;
// }
//
// bool paraProximo() {
//     if(noCorrente == NULL) {
//         return false;
//     }
//     noCorrente = noCorrente->proximo;
//
//     return true;
// }
