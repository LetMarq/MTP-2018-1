// Letícia Marques Pinho Tiago 
// Matrícula - 11721EBI014

#include <stdio.h>

int main() 
{
	int n=0,estado=0;
	char bits[256];
	printf("Escolha um numero em binario: \n");
	fflush(stdin);
	scanf("%s",(char *)&bits);
	while (bits[n]!='\0')
	{
		if(estado==0)
		{		
			if(bits[n]=='1')
			{
				estado = 1;
			}
			else 
			{	
				estado = 0;
			}
		}
		else if (estado==1)
		{
			if(bits[n]=='0')
			{
				estado = 2;
			}
			else 
			{
				estado = 0;
			}
		}
		else
		{
			if(bits[n]=='0')
			{
				estado = 1;
			}
			else
			{
				estado = 2;
			}
		}
		n++;	
	}
	if (estado == 0)
	{
		printf ("A sequencia eh multipla de 3.");
	}
	else
	{
		printf ("A sequencia nao eh multipla de 3.");
	}
	return 0;
}
