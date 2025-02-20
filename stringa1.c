#include <stdio.h>
#include <string.h>

#define N 10

int main(){
  char s[N];
  printf("Inserisci una frase: ");
  fgets(s,N,stdin);

  if (strchr(s,'\n'))
    s[strlen(s)-1] = '\0';

  printf("%s %ld", s, strlen(s));
  return 0;
}
