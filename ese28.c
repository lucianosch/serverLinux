#include <stdio.h>

int main(){
  int voto;

  printf("Inserisci il voto: ");
  scanf("%d",&voto);

  if (voto<6){
    printf("Insufficiente\n");
  }
  else {
    if (voto==6){
      printf("Sufficiente\n");
    }
    else {
      if (voto<9){
        printf("Buono\n");
      }
      else {
        printf("Ottimo\n");
      }
    }
  }
}
