#include<stdio.h>
unsigned long long int fatorial(unsigned int numero);
//func�o main come�a o programa principal
int main(void)
{
 unsigned int i; // contador
//durante cada itera��o, calcula o fatorial de (i), e
//mostra o resultado
for (i=0;i<=21;++i){
printf("%u! = %llu\n",i,fatorial(i));
}//fim for
}//fim main
// A convers�o especificada por %llu � usada para imprimir valores muito grandes
unsigned long long int fatorial(unsigned int numero)
{
 //caso base
 if(numero<=1){
return 1;
 }// fim se
 else {// passo recursivo
return (numero*fatorial(numero-1));
 }//fim else
}//fim fun��o fatorial
