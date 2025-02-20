#include <stdio.h>
#include <stdlib.h>

void scambia(int *a, int *b){
  int c = *a;
  *a = *b;
  *b = c;
}
int main(int argc, char **argv){
  int x=1,y=2;
  printf("%2d%2d\n",x,y);
  printf("%2p %2p\n",&x,&y);
  scambia(&x, &y);
  printf("%2d%2d\n",x,y);
  return 0;
}
