#include <stdio.h>
#include <string.h>

struct Libro{
  char titolo[30];
  char autore[30];
  int nPagine;
  float prezzo;
};
int main(void) {
  struct Libro l1, l2;
  printf("Inserisci titolo: ");
  fgets(l1.titolo,30, stdin);
  printf("Inserisci autore: ");
  fgets(l1.autore,30,stdin);
  printf("Inserisci numero pagine: ");
  scanf("%d", &l1.nPagine);
  printf("Inserisci prezzo: ");
  scanf("%f",&l1.prezzo);
  char c = getchar();
  while (c!='\n' && c!=EOF)
    c = getchar();
  printf("Inserisci titolo: ");
  fgets(l2.titolo,30, stdin);
  printf("Inserisci autore: ");
  fgets(l2.autore,30,stdin);
  printf("Inserisci numero pagine: ");
  scanf("%d", &l2.nPagine);
  printf("Inserisci prezzo: ");
  scanf("%f",&l2.prezzo);

  return 0;
}