#ifndef PILHA_H
#define PILHA_H

typedef struct Pilha Pilha;

/* Cria uma nova pilha */
Pilha *pilha_cria();

/* Retira um elemento do topo da pilha */
int pilha_pop(Pilha *p);

/* Insere um elemento no topo da pilha */
void pilha_push(Pilha *p, int x);

/* Verifica se a pilha está vazia */
int pilha_vazia(Pilha *p);

/* Libera a memória alocada para a pilha */
void pilha_libera(Pilha *p);

#endif