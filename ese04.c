/*
La paga di un operaio è di 15,00€ all'ora. 
Sulla stessa paga viene effettuata una trattenuta pari al 27%.
Dato il numero delle ore lavorative svolte, calcolare la paga netta.
*/

#include <stdio.h>
int main(){
  int paga_oraria = 15;
  int nOre = 30;
  int trattenuta = 27;
  float paga_lorda = paga_oraria * nOre;
  float paga_netta = paga_lorda - paga_lorda*trattenuta/100;
  printf("%.2f\n", paga_netta);
}