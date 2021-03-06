#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int *x, *y;
  int i, n=5;
  // aloca n inteiros
  x = (int*) malloc(n * sizeof(int));
  y = (int*) malloc(n * sizeof(int));
  if(x == NULL){
    exit(0);
  }
  // casting (mudanca de tipo)
  srand(time(0));
  for(i=0; i<n; i++){
    x[i] = rand()%100;
  }
  for(i=0; i<n; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  for(i=0; i<n; i++){
    y[i] = x[i];
  }

  memcpy(y, x, n * sizeof (int));

  for(i=0; i<n; i++){
    printf("%d, ", y[i]);
  }
  printf("\n");
  // libera o bloco alocado
  free(x);
  free(y);
  return 0;
}


