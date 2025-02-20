#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 5

int main(){
  srand(time(NULL));
  int v[N];
  //Iniziaòlizzazione da programma con numeri casuali:
  for (int i=0; i<N; i++)
    v[i] = rand() % 100;
  //Inizializzazione da tastiera
/*
  for (int i=0; i<N; i++){
    printf("Inserire numero intero: ");
    scanf("%d",&v[i]);
  }
*/
  //Stampa:
  for (int i=0; i<N; i++)
    printf("%3d",v[i]);
  printf("\n");
  return 0;
}

