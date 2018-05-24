// Letícia Marques Pinho Tiago - 11721EBI014

#include <stdio.h>

float media(int soma, float n){
	float d;
	d = soma/n;
	return d;
}

int soman(int v[20], int k) {
   	int i, soma=0;
   	for (i=0;i<k;i++)
    {
    	soma+=v[i];
	}
      return (soma);}
      
int main(){
	
	int num[20],soma,i,n;
	do{
		printf("Voce deseja preencher seu vetor de quantos numeros? (5~20)\n");
		scanf("%d",&n);
		}while(n<5||n>20);
		
	for(i=0; i<20; i++){
		num[i] = 0;}
	for(i=0; i<n; i++){
		printf("%do numero: ", i+1);
		scanf("%d", &num[i]); getchar();
	}
	soma = (soman(num, i));
	printf("\nMedia dos %d numeros: %f",n, media(soma, n));
	return 0;
}
