#include <stdio.h>
#include <string.h>

#define N 5
void clear(){
	char c;
	do{
		c=getchar();
	}
	while(c!='\n' && c!=EOF);
}

int main(){
	char s[N]="",t[N]="";
	int n=0,m=0;
	scanf("%d",&n);	getchar(); 
	//Elimina il \n dal buffer e consente di leggere
	//la stringa successiva

	printf("Inserisci una frase: ");
	fgets(s,N,stdin); //Legge anche il \n
	if (strchr(s,'\n')) //se \n è presente nella stringa letta
		s[strlen(s)-1]='\0'; //lo elimina
	else
		//svuota il buffer
		clear();
	printf("%ld %s\n",strlen(s),s);

	scanf("%d",&m); getchar();
	printf("%d\n", m);
/*
	while(!strchr(s,'\n')){
		fgets(s,N,stdin);
		printf("%ld %s\n",strlen(s),s);
	}
*/
	printf("Inserisci una frase: ");
	fgets(t,N,stdin);
	if (strchr(t,'\n'))
		s[strlen(t)-1]='\0';
	else
		clear();
	printf("%s %ld\n",t,strlen(t));

/*

	printf("%ld %s\n",strlen(s),s);

	fgets(s,N,stdin);
	if (strchr(s,'\n'))
		s[strlen(s)-1]='\0';
	for (int i=0; i<strlen(s); i++)
		printf("%c %d\n",s[i],s[i]);

	scanf("%d",&n);
	printf("%d\n",n);
*/
	return 0;
}
