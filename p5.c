#include <stdio.h>

int main(){
    int i, opt,*p,vetor[64];
    char *pc;
    char string[256];
    p=(int*)string;
    pc=(char*)vetor;
    do{
	printf ("Digite:"
	"\n(1)Para codificar"
	"\n(2)Para decodificar"
	"\n(3)Sair"
	"\n>");
    scanf("%d", &opt); getchar();
	switch(opt)
	{
    
		case 1:
			for (i=0; i<256; i++)
                string[i]='\0';
			printf ("\nDigite uma frase com no maximo 255 caracteres: \n");
    		fgets (string, 256, stdin);
			printf ("\n\tCodificando...\n\n");
			for (i=0; i<sizeof(string); i++){
				printf ("%i, ", p[i]);
				if (p[i]==0)
				break;}
			printf("\n");
			for(i=0;i<12;i++)
			{
				printf("~~~");
			}
			printf("\n");
			break;

    	case 2:
    		printf("\nDigite um codigo de no maximo 64 numeros (com o ultimo vetor sendo '0'):\n");
				for (i=0;i<64;i++)
				{
					vetor[i]=0;
				}
				for (i=0;i<64;i++)
				{
					scanf("%d", &vetor[i]);
					if (vetor[i]==0)
					{break;}
				}
				printf("\n\tDecodificando...\n\n");
				for (i=0;i<sizeof(vetor);i++)
				{
					printf("%c", pc[i]);
				}
			printf("\n");
				for(i=0;i<20;i++)
			{
				printf("~~~");
			}
			printf("\n");
				break;
		case 3:
			printf("\n\t*** Ate logo! ***");
			break;
    }
	}while (opt!=3);
}
