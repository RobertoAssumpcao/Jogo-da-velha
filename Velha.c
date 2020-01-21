/*********************Cabe�alho**********************

Projeto:			Jogo da velha
Autor:				Roberto de Paiva Assumpcao
Data de criacao:	26/05/2019
Versao:				3.0

Descri��o:

Um simples jogo da velha feito com matriz.
***************************************************/

#include <stdio.h>
#include <stdlib.h>

int main( )
{
	system("cls");
	int *p = NULL;
    int i =0;
    int j = 0;
	int opcao = 0;
	char jogada = 0;
	char resposta = 0;
	int vez = 0;
    char tabuleiro[3][3] = {0,1,2,3,4,5,6,7,8};
	for(i=0; i <3; i++)
	{
		for(j=0; j<3;j++)
		{
			tabuleiro[i][j] = '_';	
		} 
	}

	printf("Jogo da velha:\n");
	printf("[1]-Para jogar\n");
	printf("[2]-Sair\n");
	printf("Digite a opcao\n");
	scanf("%i",&opcao);
	switch (opcao)
	{
	case 1:
	{
		do
		{ 
		do
		{
			for(i=0;i<3;i++)
			{
   				for(j=0;j<3;j++)
   				{
       				printf("%c\t", tabuleiro[i][j]);
  				}
   				printf("\n");
			}
			printf("Digite a linha:\n");
			scanf("%d",&i);
			printf("Digite a coluna:\n");
			scanf("%d",&j);
			if (i<0 || j<0 || i>8 || j>8)
			{
				printf("Opcao invalida:");
			}		
			if(i==0 ||i==1||i==2||i==3||i==4||i==5||i==6||i==7||i==8||j==0||j==1||j==2||j==3||j==4||j==5||j==6||j==7||j==8)
			{
				if((vez%2)==0)
				{
					tabuleiro[i][j] = 'o';
				}
				else
				{
					tabuleiro[i][j] = 'x';
				}
				vez++;
				jogada++;
			}
			
		if(tabuleiro[0][0] =='x' &&  tabuleiro[0][1]=='x' &&  tabuleiro[0][2]=='x' || )
		{
			printf("Jogador x e vencedor!\n");
			break;
		}
		}while (jogada <=9);
		printf("Deseja jogar novamente digite 6:\n");
		scanf("%d",&resposta);
		}while(resposta==6);
	}					
	break;
	case 2:
	{
		printf("Fim de jogo!\n");
	}
	break;
	default:
	{	
		printf("opcao invalida!");
	}
	break;
	}
	return 0;
}

