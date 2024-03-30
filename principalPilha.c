#include "pilha.h"
#include <stdio.h>

int main() {
  // Criando uma pilha
  Pilha *pilha = pilha_cria();

  // Verificando se a pilha está vazia
  printf("A pilha está vazia? %s\n", pilha_vazia(pilha) ? "Sim" : "Não");

  // Inserindo elementos na pilha
  printf("Empilhando elementos...\n");
  pilha_push(pilha, 10);
  pilha_push(pilha, 20);
  pilha_push(pilha, 30);

  // Verificando se a pilha está vazia novamente
  printf("A pilha está vazia? %s\n", pilha_vazia(pilha) ? "Sim" : "Não");

  // Imprimindo e removendo elementos da pilha
  printf("Desempilhando elementos...\n");
  while (!pilha_vazia(pilha)) {
    int valor = pilha_pop(pilha);
    printf("Elemento desempilhado: %d\n", valor);
  }

  // Verificando se a pilha está vazia após desempilhar todos os elementos
  printf("A pilha está vazia? %s\n", pilha_vazia(pilha) ? "Sim" : "Não");

  // Liberando a memória da pilha
  pilha_libera(pilha);

  return 0;
}
