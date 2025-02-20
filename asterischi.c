#include <stdio.h>
#include <stdlib.h>

void stampa(int n, char c){
  for(int i=0; i<n; i++)
    printf("%c",c);
}

int main(int argc, char** argv){
  int nrighe=0;
  char simbolo='?';
  switch (argc){
    case 1:
      printf("Quante righe vuoi stampare? ");
      scanf("%d",&nrighe);
      getchar();
      printf("Che simbolo vuoi stampare? ");
      scanf("%c",&simbolo);
      break;
    case 2:
      nrighe = atoi(argv[1]);
      printf("Che simbolo vuoi stampare? ");
      scanf("%c",&simbolo);
      break;
    case 3:
      nrighe = atoi(argv[1]);
      simbolo = argv[2][0];
      break;
  }
  for (int i=0; i<nrighe; i++){
    stampa(nrighe - (i + 1), ' ');
    stampa(i+1, simbolo);
    printf("\n");
  }
  for (int i=0; i<nrighe; i++){
    stampa(i, ' ');
    stampa(nrighe - i, simbolo);
    printf("\n");
  }
  for (int i=0; i<nrighe; i++){
    stampa(i+1, simbolo);
    printf("\n");
  }
  for (int i=0; i<nrighe; i++){
    stampa(nrighe - i, simbolo);
    printf("\n");
  }
  return 0;
}
