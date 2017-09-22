#include <stdio.h>
#include <stdlib.h>

void limpaQuadra(int pombas){
	int n;
	n=0;
	if(pombas > 0){
		limpaQuadra(pombas - 1);
		n=n+1;
		printf("matou %d pomba\n\n",n);	
	}
}

int main(){
	int pombas;
	printf("\nEntre com um numero de pombas: ");
	scanf("%d",&pombas);
	limpaQuadra(pombas);
	printf("done");
	
	return 0;
}
