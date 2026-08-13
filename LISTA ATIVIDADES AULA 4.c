#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	
	int primeiro, segundo, aux;
	
	
	printf("Digite o primeiro Valor");
	scanf("%d", &primeiro);
	printf("Digite o segundo Valor");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf("%d e %d", primeiro, segundo);
	
	
}
