#include "pilha.h"
#include <stdlib.h>

#define TAMANHO_INICIAL 10

struct Pilha {
  int *elementos;
  int tamanho;
  int capacidade;
};

Pilha *pilha_cria() {
  Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
  if (pilha == NULL) {
    exit(EXIT_FAILURE);
  }
  pilha->elementos = (int *)malloc(TAMANHO_INICIAL * sizeof(int));
  if (pilha->elementos == NULL) {
    free(pilha);
    exit(EXIT_FAILURE);
  }
  pilha->tamanho = 0;
  pilha->capacidade = TAMANHO_INICIAL;
  return pilha;
}

void pilha_push(Pilha *pilha, int valor) {
  if (pilha->tamanho == pilha->capacidade) {
    pilha->capacidade *= 2;
    pilha->elementos =
        (int *)realloc(pilha->elementos, pilha->capacidade * sizeof(int));
    if (pilha->elementos == NULL) {
      exit(EXIT_FAILURE);
    }
  }
  pilha->elementos[pilha->tamanho++] = valor;
}

int pilha_pop(Pilha *p) {
  if (pilha_vazia(p)) {
    exit(EXIT_FAILURE);
  }
  return p->elementos[--p->tamanho];
}

int pilha_vazia(Pilha *pilha) { return pilha->tamanho == 0; }

void pilha_libera(Pilha *pilha) {
  free(pilha->elementos);
  free(pilha);
}
