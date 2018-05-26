// Letícia Marques Pinho Tiago - 11721EBI014

#include <stdio.h>

int ackerman(int m, int n)
{
	if(m==0) return n + 1;
	else if(m > 0 && n==0) return ackerman(m-1, 1);
	else if(m > 0 && n > 0)  return ackerman(m - 1,ackerman(m, n - 1));
  	return 0;
}

int main(){
	int i, j;
		printf("Digite o seu 'm' desejado:\n>");
		scanf("%d",&i);
		printf("Digite o seu 'n' desejado:\n>");
		scanf("%d",&j);
		printf("Ackermann Function: (%d, %d) = %d\n", i, j, ackerman(i,j));
	return 0;
}
