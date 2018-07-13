#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	char frase[255];

	scanf("%d", &n);

	scanf(" %[^\n]s", frase);

	if (n < strlen(frase)) return 1;

	int sizeF = 0;
	int palavras = 0;

	for (int i = 0; frase[i]; i++)
		if (frase[i] != ' ') sizeF++;
		else palavras++;

	if (frase[strlen(frase) - 1] != ' ') palavras++;

	int espacos = n - sizeF;

	int i = 0;

	int cont = 0;

	while (frase[i])
	{
		while (frase[i] && frase[i] != ' ') printf("%c", frase[i++]);

		if (!frase[i]) break;

		int m = espacos / (palavras - 1);
		while (m--)
		{	
			printf(" ");
			cont++;
		}

		if (espacos % (palavras - 1) && (cont - espacos) > (espacos / palavras - 1))
			printf(" ");

		i++;
	}

	printf("\n");

	return 0;
}
