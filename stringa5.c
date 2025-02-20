#include <stdio.h>
#include <string.h>

#define N 10

void clearBuffer();
void clear(char []);

int main(){
  int n;
  char nome1[N], nome2[N];
  printf("Inserisci un nome: ");
  fgets(nome1, N, stdin);
  clear(nome1);
  printf("%s\n", nome1);

  printf("Inserisci un nome: ");
  fgets(nome2, N, stdin);
  clear(nome2);
  printf("%s\n", nome2);

  strcat(nome1, nome2);
  printf("%s\n", nome1);

  return 0;
}

void clearBuffer(){
  char c = getchar();
  while (c != '\n' && c != EOF){
    c = getchar();
  }
}

void clear(char s[]){
  if (strchr(s,'\n'))
    s[strlen(s) - 1] = '\0';
  else
    clearBuffer();
}
