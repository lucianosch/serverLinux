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
  printf("Inserisci una frase: ");
  scanf("%s", s);
  clear();
  printf("Inserisci un numero: ");
  scanf("%d",&n);
  printf("%d\n",n);
//  clear();
//Ripulisce la stringa
//  if (strchr(s,'\n'))
//    s[strlen(s)-1] = '\0';

  printf("%s %ld\n", s, strlen(s));
//Ripulisce il buffer della tastiera
//  clear();

  return 0;
}
