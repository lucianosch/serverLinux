#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

void carica(int []);
void stampa(int []);
void ordina(int []);
void ricCompleta(int []);
void ricParziale(int []);
void ricDicotomica(int []);
void menu();

int main(){
  int scelta;
  int v[N];
  carica(v);
  do{
    menu();
    printf("Inserici scelta: ");
    scanf("%d",&scelta);
    switch(scelta){
      case 1: 
        stampa(v);
        break;
      case 2:
	ordina(v);
	break;
      case 3:
	ricCompleta(v);
	break;
      case 4:
	ricParziale(v);
	break;
      case 5:
	ordina(v);
	ricDicotomica(v);
	break;
      case 0: 
        break;
      default: 
        printf("Scelta errata!\n");
        break;
    }
  }while(scelta != 0);
  return 0;
}

void carica(int a[]){
  srand(time(NULL));
  for (int i=0; i<N; i++)
    a[i] = rand()%100 + 1;
}

void stampa(int a[]){
  for (int i=0; i<N; i++)
    printf("%4d",a[i]);
  printf("\n");
}

void ordina(int a[]){
  for (int i=0; i<N-1; i++)
    for (int j=0; j<N-1-i; j++)
      if (a[j]>a[j+1]){
        int temp = a[j];
	a[j] = a[j+1];
	a[j+1] = temp;
      }
}

void ricCompleta(int a[]){
  int nOccorrenze = 0;
  int elem;
  printf("Inserisci elemento da cercare: ");
  scanf("%d", &elem);
  for (int i=0; i<N; i++)
    if(a[i] == elem)
      nOccorrenze++;
  if (nOccorrenze==0)
    printf("Elemento non presente\n");
  else
    printf("Elemento presente %d volte\n",nOccorrenze);
}

void ricParziale(int a[]){
  int pos = -1;
  int elem;
  printf("Inserisci elemento da cercare: ");
  scanf("%d", &elem);
  for (int i=0; i<N && pos<0; i++)
    if(a[i] == elem)
      pos = i;
  if (pos<0)
    printf("Elemento non presente\n");
  else
    printf("Elemento presente in posizione %d\n",pos);
}

void ricDicotomica(int a[]){
  int pos = -1;
  int i=0,f=N-1,c;
  int elem;
  printf("Inserisci elemento da cercare: ");
  scanf("%d", &elem);
  while (i<=f && pos < 0){
    c = (i+f)/2;
    if (a[c] == elem)
      pos = c;
    else if (a[c]<elem)
      i = c+1;
    else
      f = c-1;
  }
  if (pos<0)
    printf("Elemento non presente\n");
  else
    printf("Elemento presente in posizione %d\n",pos);
}

void menu(){
  printf("1. Stampa\n");
  printf("2. Ordina\n");
  printf("3. Ricerca (completa)\n");
  printf("4. Ricerca (parziale)\n");
  printf("5. Ricerca (dicotomica)\n");
  printf("0. Esci\n");
}
