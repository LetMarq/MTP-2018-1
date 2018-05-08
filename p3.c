// Letícia Marques Pinho Tiago - 11721EBI014

#include <stdio.h>
int dec_bin(int num)
{
	int i,r;
	for(i=31;i>0;i--)
	{	r = num >> i;
		if(r & 1){printf("1");}
		else {printf ("0");}
	}
}
int main()
{	
	int	opt,n,m;
	do{	printf("\nPrograma de operacoes bitwise, selececione uma opcao abaixo:"
	"\n(1) NOT"
	"\n(2) AND"
	"\n(3) OR"
	"\n(4) XOR"
	"\n(5) Right Shift"
	"\n(6) Left Shift"
	"\n(7) Sair do programa"
	"\n>");
	scanf("%d", &opt); getchar();
	
		switch(opt)
		{
			case 1:
				printf("\nDigite o numero para a operacao NOT:\n>");
				scanf("%d", &n); getchar();
				printf("\t\t\t\t  A | NOT\n");
				printf("%d(",n);
				dec_bin(n);
				printf(")");
				printf("| %d(", (~n));
				dec_bin(~n);
				printf(")\n");				
				break;
			case 2:
				printf("\n Digite dois numeros para a operacao bitwise AND:\n>");
				scanf("%d",&n);
				printf(">");
				scanf("%d",&m);
				getchar();
				printf("\n\t\tA\t\t    |\t\tB\t\t\t |\t\t  AND\t\t\n");
				printf("%d(",n);
				dec_bin(n);
				printf(")");
				printf(" | %d(",m);
				dec_bin(m);
				printf(")");
				printf("| %d(",n&m);
				dec_bin(n&m);
				printf(")\n") ;
				break;
			case 3:
				printf("\n Digite dois numeros para a operacao bitwise AND:\n>");
				scanf("%d",&n); getchar();
				printf(">");
				scanf("%d",&m); getchar();
				printf("\n\t\tA\t\t     |\t\tB\t\t\t  |\t\t  OR\t\t\n");
				printf("%d( ",n);
				dec_bin(n);
				printf(")");
				printf(" | %d(", n);
				dec_bin(m);
				printf(")");
				printf("| %d(",n|m);
				dec_bin(n|m);
				printf(")\n") ;
				break;
			case 4:
				printf("\n Digite dois numeros para a operacao bitwise XOR:\n>");
				scanf("%d",&n); getchar();
				printf(">");
				scanf("%d",&m); getchar();
				printf("\n\t\tA\t\t    |\t\tB\t\t\t |\t\t  XOR\t\t\n");
				printf("%d(",n);
				dec_bin(n);printf(")");
				printf(" | %d(",m);
				dec_bin(m);
				printf(")");
				printf("| %d(",n^m);
				dec_bin(n^m);
				printf(")\n") ;
				break;	
			case 5:
				printf("\n Digite dois numeros para a operacao bitwise RIGHT SHIFT, sendo o segundo numero o deslocamento:\n>");
				scanf("%d",&n); getchar();
				printf(">");
				scanf("%d",&m); getchar();
				printf("\n\t\tA\t\t       |\t\t>>\t\t     |\t RIGHT SHIFT\t\t\n");
				printf("%d(",n);
				dec_bin(n);
				printf(")");
				printf(" | %d>>(",m);
				dec_bin(m);
				printf(")");
				printf("| %d(",n>>m);
				dec_bin(n>>m);
				printf(")\n") ;
				break;
			case 6:
				printf("\n Digite dois numeros para a operacao bitwise LEFT SHIFT, sendo o segundo numero o deslocamento:\n>");
				scanf("%d",&n); getchar();
				printf(">");
				scanf("%d",&m); getchar();
				printf("\n\t\tA\t\t     |\t\t<<\t\t\t\t  |\t\tLEFT SHIFT\t\t");
				printf("%d(",n);
				dec_bin(n);
				printf(")");
				printf(" | << %d bits(",m);
				dec_bin(m);
				printf(")");
				printf("| %d(",n<<m);
				dec_bin(n<<m);
				printf(")\n") ;
				break;
			case 7:
				printf ("\n\n\t *** Ate logo! *** ");
				return 0;
				break;
			}
	}while(opt!=7);		
	return 0;
}
	
