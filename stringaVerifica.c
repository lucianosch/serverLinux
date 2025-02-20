#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 30

void ese1(char[], char[], int, int );
void ese2(char[], char[], int);
void ese3(char[], char[], char[]);
int main(){
  char frase[]="Buongiorno a tutti!";
  char nome[] = "Giancarlo";
  char copia[N],n_voc[N], n_con[N];
  ese1(frase, copia, 3, 7);
  printf("%s\n", copia);
  ese2(frase, copia, 7);
  printf("%s\n", copia);
  ese3(nome,n_voc, n_con);
  printf("%s %s %s\n",nome, n_voc, n_con);

  return 0;
}

void ese1(char s[], char t[], int da, int a){
  for (int i=da; i<=a; i++)
    t[i-da] = s[i];
  t[a+1]='\0';
}

void ese2(char s[], char t[], int n){
  for (int i=0; i<strlen(s); i++)
    if (isalpha(tolower(s[i])))
      t[i] = ((tolower(s[i]) - 'a') + n) % 26 + 'a';
    else
      t[i] = s[i];
}

void ese3(char s[], char s_v[], char s_c[]){
  char vocali[] = "aeiou";
  int iv=0,ic=0;
  for (int i=0; i<strlen(s); i++)
    if (isalpha(tolower(s[i]))){
      if (strchr(vocali, tolower(s[i])))
        s_v[iv++] = s[i];
      else
	s_c[ic++] = s[i];
    }
  s_v[iv]='\0';
  s_c[ic]='\0';
}
