#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float coefficienti()
{
   float n;
   printf("coefficiente: ");
   scanf("%f", &n);
   return n;
}
/*
double discriminante(float a, float b, float c)
{
   return b*b-4*a*c;
}
*/
void soluzioni(float a, float b, float c)
{
   double x1,x2; 
   double d = b*b - 4*a*c;
   if(d<0)
      printf("\nnon possono esserci soluzioni reali");
   else if(d==0) {
      x1=(-b)/(2*a);
      printf("Due soluzioni reali coincidenti x1 e x2 uguali a %5.3lf ",x1);
  }
   else
   {
      x1=(-b-sqrt(d))/(2*a);
      x2=(-b+sqrt(d))/(2*a);
      printf("Due soluzioni reali x1= %5.3lf e x2= %5.3lf ",x1,x2);
   }

}

void equazione_primo(float b, float c)
{
   double x1;
    if((b==0)&&(c==0))
	printf("\nequazione indeterminata");
    else if(b==0)
	printf("\nequazione impossibile");
    else {
	x1=-c/b;
	printf("\n x= %5.3f", x1);
	 }
}

int main()
{
   float a,b,c;
   a = coefficienti();
   b = coefficienti();
   c = coefficienti();
   if(a==0) 
       equazione_primo(b,c);
   else {
//        double d = discriminante(a,b,c);
        soluzioni(a,b,c);
    }
system("pause");
}
