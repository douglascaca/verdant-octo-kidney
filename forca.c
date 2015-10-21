#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void create( char s[], char w[] );
void clear();

void create( char s[], char w[] )
{
int len = strlen(s)

int main()
{
	char segredo[100];
	char palavra[100];
	unsigned len;

	printf("Jogo da Forca, (c) 2015.\n");

	printf("Informe a palavra secreta: ");
	scanf("%s", segredo);

// 	FIXME: deve ficar no inicio da tela
//	int i;	
//	for ( i = 0; i < 20; i ++)
//		printf("\n");

	printf("A palavra informada foi: [%s]\n");

	len = strlen(segredo);

	printf("A palavra tem %d caracteres.\n", len);
	
	int j;
	for ( j = 0, j< len, j++)
		palavra[j] = '-';
	palavra[len] = '\0';

	printf("A palavra apresentada é: [%s]\n", word);
  

	printf("**FIM**\n");

	return 0;
}
