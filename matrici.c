#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NR 3
#define NC 4

int main(){
  int m[NR][NC];
  srand(time(NULL));

  //Caricamento matrice
  for (int c=0; c<NC; c++)
    for(int r=0; r<NR; r++)
      m[r][c] = c*NR + r; //rand()%100;



  //Stampa matrice
  for(int r=0; r<NR; r++){
    for(int c=0; c<NC; c++)
      printf("%3d",m[r][c]);
    printf("\n");
  }
  return 0;
}
