#include <stdio.h>

int main(){
  int voto;
  do {
    printf("Inserisci il voto: ");
    scanf("%d",&voto);
  }while (voto<1 || voto>10);

  switch(voto){
    case 6: printf("Sufficiente\n");break;
    case 7:
    case 8: printf("Buono\n");break;
    case 9:
    case 10: printf("Ottimo\n");break;
    default: printf("Insufficiente\n"); break;
  }
}
