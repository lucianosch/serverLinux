#include <stdio.h>

int main(){

  int v[] = {1,2,3,4,5};
  char s[] = "Ciao";

  for (int i=0; i<5; i++)
    printf("%3d",*(v+i));

  printf("\n");

  for (int i=0; i<4; i++)
    printf("%c",*(s+i));

  printf("\n");
  return 0;
}

