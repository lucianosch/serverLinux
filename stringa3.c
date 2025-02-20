#include <stdio.h>
#include <string.h>

#define N 5

void clear(){
  char c = getchar();
  while (c != '\n' && c != EOF){
    c = getchar();
  }
}

int main(){
  int n;
  char s[N];
  printf("Inserisci un numero: ");
  scanf("%d",&n);
  clear();
  printf("Inserisci una frase: ");
  fgets(s,N,stdin);
//Ripulisce la stringa
  if (strchr(s,'\n'))
    s[strlen(s)-1] = '\0';

  printf("%s %ld", s, strlen(s));
//Ripulisce il buffer della tastiera
  clear();

  return 0;
}
