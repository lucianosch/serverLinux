#include <stdio.h>

int main(){
  int x=10;
  int *px;
  int *p2;

  printf("%ld %ld\n",sizeof(x),sizeof(px));

  px = &x;
  p2 = px;

  printf("%p\n",px);

  printf("%d %d %d\n",x,*px, *p2);
  return 0;
}
