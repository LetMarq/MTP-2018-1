// Letícia Marques Pinho Tiago - 11721EBI014

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dimensoes{
    float largura;
    float profundidade;
    float altura;
}Dimensoes;

typedef struct Produto{
    char nome[64];
    float preco;
    Dimensoes dimensoes;
}Produto;

void cadastra(Produto * p){
    printf("\nDigite o nome do produto: ");
    fgets(p->nome, 64, stdin);
    p->nome[strlen(p->nome)-1] = '\0';
    printf("\nDigite o preco: ");
    scanf("%f", &(p->preco));
    getchar();
    printf("\nDigite a largura: ");
    scanf("%f", &(p->dimensoes.largura));
    getchar();
    printf("\nDigite a profundidade: ");
    scanf("%f", &(p->dimensoes.profundidade));
    getchar();
    printf("\nDigite a altura: ");
    scanf("%f", &(p->dimensoes.altura));
    getchar();
}

void consulta(Produto * p){
    char c;
    if(strlen(p->nome) == 0){
        printf("\nProduto nao cadastrado!\n");
        while((c=getchar()) != '\n');
        return;
    }
    printf("\n%s, R$ %.2f, L: %.2fm x P: %.2fm x A: %.2fm\n", p->nome, p->preco,(p->dimensoes.largura),(p->dimensoes.profundidade), (p->dimensoes.altura));
    while((c=getchar())!='\n');
}

int main(){
    int opt1=0, opt2=0;
    Produto * produtos = calloc(2, sizeof(Produto));

    char sub[2][16] = {"Cadastro", "Consulta"};
    while(opt1 != 3){
        printf("\n=-=-=-=-=MENU=-=-=-=-=\n");
        printf("\n1 - Cadastrar\n2 - Consulta\n3 - Sair\n> ");
        scanf("%d", &opt1);
        getchar();
        opt2 = 0;
        switch(opt1){
            case 1: case 2:
                while(opt2!=3){
                    printf("\nRealizar %s\n", sub[opt1-1]);
                    printf("\n1 - Produto 1\n2 - Produto 2\n3 - Voltar\n> ");
                    scanf("%d", &opt2);
                    getchar();
                    switch(opt2){
                        case 1: case 2:
                            printf("\nProduto %d\n", opt2);
                            if(opt1==1)
                                cadastra(&produtos[opt2-1]);
                            if(opt1==2)
                                consulta(&produtos[opt2-1]);
                            opt2=3;
                            break;
                        default:
                            if(opt2!=3)
                                printf("\nOpcao invalida!\n");
                            break;
                    }
                }
                break;
            default:
                if(opt1!=3)
                    printf("\nOpcao invalida!\n");
                break;
        }
    }
    free(produtos);
    return 0;
}
