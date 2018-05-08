// Letícia Marques Pinho Tiago - 11721EBI014

#include <stdio.h>
int main()
{	
	char str[256];
	int	i,cum=0;
	printf("Digite a string desejada:\n>");
	fgets(str,256,stdin);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]>=48 && str[i]<=57)
		{
			str[i]=str[i]-48;
			cum=cum*10+str[i];
		}
	}
	printf("\nA nova string eh:\n%d",cum);
	return 0;
}

