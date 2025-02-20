#include <stdio.h>
//#include <stdlib.h>

int main(int argc, char **argv){
  int somma=0,nvoti=0;
  int fvoto[13]={0};
  int voto;
  freopen("voti.csv","r",stdin);
  while (scanf("%d",&voto) != EOF){
    somma += voto;
    nvoti++;
    fvoto[voto-18]++;
  }
  printf("somma: %d\nnum. voti: %d\n",somma,nvoti);
  printf("media: %.2lf\n",(double)somma/nvoti);
  int sommaf = 0; //Somma frequenze
  for (int i=0; i<13; i++){
    printf("voto: %d: frequenza: %d\n",i+18,fvoto[i]);
    sommaf+=fvoto[i];
  }
  printf("Somma frequenze: %d\n",sommaf);
  return 0;
}
