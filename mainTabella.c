#include <stdio.h>

#define N 10

void cifre(int, int[]);

int main(){
  for (int i=1; i<=N; i++){
    for (int j=1; j<=N; j++)
      printf("%3d", i*j);
    printf("\n");
  }
  return 0;
}

void cifre(int n, int f[]){}
