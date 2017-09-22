#include <stdio.h>
#include <stdlib.h>

int fatorial(int num){

 int resultado;
 if(num == 1)
 return(1);
 resultado = num*fatorial(num-1);
 return(resultado);
 }
 
int main()
 {
 int num;
 printf("\nEntre com um valor inteiro :");
 scanf("%d",&num);
 printf("O fatorial de %d eh %d\n\n",num,fatorial(num));
 return(0);
 }
