#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 30

void clearBuffer();
void clear(char []);

int main(){
  //Dichiaro un array di 5 stringhe, ciascuna di lunghezza max 30
  char elenco[5][N];
  //Lettura di 5 nomi in ordine qualsiasi
  for (int i=0; i<5; i++){
    printf("Inserisci un nome: ");
    fgets(elenco[i], N, stdin);
    clear(elenco[i]);
  }
  //Stampa elenco
  for (int i=0; i<5; i++){
    printf("%s\n",elenco[i]);
  }
  //Ordino elenco
  for (int i = 0; i<4; i++)
    for (int j=0; j<4-i; j++)
      if (strcmp(elenco[j], elenco[j+1]) > 0){
        char temp[N];
        strcpy(temp, elenco[j]);
        strcpy(elenco[j], elenco[j+1]);
        strcpy(elenco[j+1], temp);
      }
  //tampo elenco ordinato
  for (int i=0; i<5; i++){
    printf("%s\n",elenco[i]);
  }


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
