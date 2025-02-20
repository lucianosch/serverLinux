#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 30

void clearBuffer();
void clear(char []);

int main(){
  char cifre[] = "0123456789";

  for (int i=0; i<strlen(cifre); i++)
    printf("cifre[%d] = %c %d\n",i, cifre[i], cifre[i]);

  return 0;
}

void clearBuffer(){
  char c = getchar();
  while (c != '\n' && c != EOF){
    c = getchar();
  }
}

void clear(char s[]){
  if (strchr(s,'\n'))
    s[strlen(s) - 1] = '\0';
  else
    clearBuffer();
}
