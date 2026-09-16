#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

void ex1(){
    printf("ex1\n");
	int primeiro, segundo, aux;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &primeiro);
	printf("Digite o segundo valor: ");
	scanf("%d", &segundo);
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	printf("%d e %d\n", primeiro, segundo);
}

void ex3(){
   printf("===================================\n");
    printf("Ex3\n");
    int n, res;
    int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;

    printf("Insira o valor para a conversão: ");
    scanf("%d", &n);

    bit_64 = n % 2;
    res = n / 2;
    bit_32 = res % 2;
    res = res / 2;
    bit_16 = res % 2;
    res = res / 2;
    bit_8 = res % 2;
    res = res / 2;
    bit_4 = res % 2;
    res = res / 2;
    bit_2 = res % 2;
    res = res / 2;

    printf("O valor %d em binário é: %d %d %d %d %d %d\n", n, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
}

void ex4(){
    printf("===================================\n");
    printf("Ex4\n");
      float sal, vendas, comissao, total;

      printf("Digite o seu salário: ");
      scanf("%f", &sal);

      printf("Digite o valor total de vendas: ");
      scanf("%f", &vendas);

      comissao = vendas * 0.15;

      if (vendas > 0)
      {
      total = sal + comissao;
      printf("Seu salário é de %.2f, a boni doida é %.2f.\n TOTAL: R$%.2f\n", sal, comissao, total);
      }
      else {
        printf("Seu salário é R$%.2f e você não teve nenhuma comissão!\n", sal);
      }
}

void ex5(){
    printf("===================================\n");
      printf("Ex5\n");

      int n1, n2, n3, n4, soma, media, produ;

      printf("Digite o primeiro número: ");
      scanf("%d", &n1);

      printf("Digite o segundo número: ");
      scanf("%d", &n2);

      printf("Digite o terceiro número: ");
      scanf("%d", &n3);

      printf("Digite o quarto número: ");
      scanf("%d", &n4);

      
      soma = n1 + n2 + n3 + n4;
      printf("A soma entre %d + %d + %d + %d é igual a: %d\n", n1, n2, n3, n4, soma);

      media = soma / 4;
      printf("A média entre os números escolhidos é %d\n", media);

      produ = n1 * n2 * n3 * n4;
      printf("O produtório é %d\n", produ);
}

void ex6(){
    printf("===================================\n");
      printf("Ex6\n");

      int ano, meses, dias;

      printf("Digite sua idade: ");
      scanf("%d", &ano);


      meses = ano * 12;
      dias = ano * 365;

      printf("Sua idade em anos: %d\n", ano);
      printf("Sua idade em meses: %d\n", meses);
      printf("Sua idade em dias: %d\n", dias);

}

void ex7(){
    printf("===================================\n");
    printf("Ex7\n");

    float raio, r3, volume;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    r3 = pow(raio, 3);
    volume = (4/3.0) * pi * r3;

    printf("O volume da esfera é: %.2f\n", volume);
}

void ex8(){
    printf("===================================\n");
    printf("Ex8\n");

    int x1, x2, y1, y2, p1, p2;
    float dist;

    printf("Insira o valor do par ordenado (x1, y1): ");
    scanf("%d", &x1);
    scanf("%d", &y1);

    printf("Insira o valor do par ordenado (x2, y2): ");
    scanf("%d", &x2);
    scanf("%d", &y2);
    
    p1 = pow(x2-x1, 2); p2 = pow(y2-y1, 2);
    dist = sqrt(p1 + p2);
    printf("A distância é: %f", dist);
}

int main(){
	printf("=======================================\n");
	printf("|                 MENU                 |\n");
	printf("=======================================\n");
	
	printf("=========SELECAO DE EXERCICIO==========\n");
	
	printf("Exercicio 1 ");
	printf("\nExercicio 2 ");
	printf("\nExercicio 3 ");
	printf("\nExercicio 4 ");
	printf("\nExercicio 5 ");
	printf("\nExercicio 6 ");
	printf("\nExercicio 7 ");
	printf("\nExercicio 8 ");
	printf("\nExercicio 9 ");
	printf("\nExercicio 10\n");

int ex;

printf("Escolha o exercício: ");
scanf("%d", &ex);

switch (ex){
    case 1:
    ex1();
    break;

    case 3:
    ex3();
    break;

    case 4:
    ex4();
    break;

    case 5:
    ex5();
    break;

    case 6:
    ex6();
    break;

    case 7:
    ex7();
    break;

    case 8:
    ex8();
    break;

    return 0;
}

}
