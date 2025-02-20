#include <stdio.h>
int main(){
  int n,somma=0;
  printf("Inserire un valore intero positivo: ");
  scanf("%d",&n);
  for (int i=1; i<=n; i++)
    somma += i;
  printf("La somma dei primi %d interi è: %d\n",n,somma);
}
