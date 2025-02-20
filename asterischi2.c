#include <stdio.h>

void stampa(int n, char c){
  for(int i=0; i<n; i++)
    putchar(c);
}

int main(){
  int nrighe;
  printf("Quante righe vuoi stampare? ");
  scanf("%d",&nrighe);

  for (int i=0; i<nrighe; i++){
    stampa(i+1,'*');
    printf("\n");
  }

  for (int i=0; i<nrighe; i++){
    stampa(nrighe-i,'*');
    printf("\n");
  }

//  for (int i=nrighe; i>0; i--){
//    stampa(i,'*');
//    printf("\n");
//  }

  for (int i=0; i<nrighe; i++){
    stampa(nrighe-i-1,' ');
    stampa(i+1,'*');
    printf("\n");
  }

  for (int i=0; i<nrighe; i++){
    stampa(i,' ');
    stampa(nrighe-i,'*');
    printf("\n");
  }

//  for (int i=nrighe; i>0; i--){
//    stampa(nrighe-i,' ');
//    stampa(i,'*');
//    printf("\n");
//  }

  return 0;
}
