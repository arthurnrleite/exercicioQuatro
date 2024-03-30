#include "circuloOpaco.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

  Circulo *c1 = circ_cria(0, 0, 5);
  Circulo *c2 = circ_cria(3, 4, 5);

  printf("C1:localizacao do centro - (%.2f, %.2f)\n\n", c1->x, c1->y);
  printf("area c1: %.2f\n\n", circ_area(c1));

  printf("C1: localização do centro - (%.2f, %.2f)\n\n", c2->x, c2->y);
  printf("area c1: %.2f\n\n", circ_area(c2));

  if(circ_concentricos(c1, c2)){
    printf("concêntricos\n\n");
  } else {
    printf("não concêntricos\n\n");
  }

  printf("raio c1: %.2f\n\n", circ_raio(c1));
  printf("raio c2: %.2f\n\n", circ_raio(c2));

  circ_libera(c1);
  circ_libera(c2);

  return 0;
  
}