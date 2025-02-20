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
  char s[N];
  char t[N];
  printf("Inserisci una frase: ");
  fgets(s,N,stdin);
//Ripulisce la stringa
  if (strchr(s,'\n'))
    s[strlen(s)-1] = '\0';

  printf("%s %ld", s, strlen(s));
//Ripulisce il buffer della tastiera
  clear();

  printf("Inserisci una frase: ");
  fgets(t,N,stdin);
  printf("%s %ld", t, strlen(t));

  return 0;
}
