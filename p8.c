// Letícia Marques Pinho Tiago - 11721EBI014

#include <stdio.h>
#include <stdlib.h>

void alec(float * vetor, int tamanho_vetor) 
{
	int i=0; 
	for(i= 0; i< tamanho_vetor; i++){
		vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;}
}

float soma(float v[], int n)
{
	 if (n != 0)
   {  
      float s;
      s = soma(v, n - 1);
    	if (v[n - 1] > 0){
			s = s + v[n-1];
      		return (s);}
   }
   return 0;
}

float prod(float v[], int j)
{
	float multiplica = 1.0f;
	for(int i=0; i<j; i++) {
		multiplica = multiplica * v[i];}
  	return multiplica;
}

int main()
{
	srand(123456);
 	float num[100];
	int opt,tamanho=100;
  	alec(num, tamanho);
  
	do
  {
  	printf("\n(1) Somatorio \n(2) Produto \n(3) Sair do programa \n>");
	scanf("%d", &opt);	
	getchar();
	switch(opt)
    {
		  case 1:
			  printf("\nSoma: %f", soma(num, tamanho));
			  break;
		  case 2:
		  	printf("\nProduto: %f", prod(num, tamanho));
		  	break;
		  case 3:
        	return 0;

			break;
    }
	}while(opt!=3);
  
	return 0;
}
