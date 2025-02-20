#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 20

int main(){
  int v[N];
  srand(time(NULL));
//Inizializzo l'array
  for (int i=0; i<N; i++)
    v[i] = rand()%100;
//Stampa dell'array
  for (int i=0; i<N; i++)
    printf("%3d",v[i]);
  printf("\n");
  return 0;
}
