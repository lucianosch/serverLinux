#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "mylib.h"
#define N 30

int main(){
  int n = 97;
  char nome1[N];
  printf("Inserisci una frase: ");
  fgets(nome1, N, stdin);
  clear(nome1);
  printf("%s\n", nome1);
  getchar();

  for (int i=0; i<strlen(nome1); i++)
    if (isalpha(nome1[i]))
      printf("%c\n", nome1[i]);
  getchar();

  for (int i=0; i<strlen(nome1); i++)
    if (isalpha(nome1[i]))
      printf("%d\n", nome1[i]);
  getchar();

  printf("n: %d %c\n",n, n);

  return 0;
}
