#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* escrever um programa que calcule e escreva:
 a quantidade de laços necessarios para que o seguinte somatorio abaixo ultrapasse o valor de 100.00

	 nessa laço calcule a soma dos 10 primeiros elementos:
   
	S= 3/2! - 4/3! + 5/4! - 6/5! + .... + n/d!
   
*/



int CalculaFatorial (double denominador)
{
	
	if (denominador == 0)
	return 1.0;
	
	else 
	return denominador * (CalculaFatorial(denominador-1.0));
}

	


int main(void) {
	
	double soma=0.0,numerador=3.0,denominador=2.0;
	int contador=0;
	
	
	while (contador<10)
	{
		if (contador % 2 != 0)
		soma -= numerador/CalculaFatorial(denominador);
		else
		soma += numerador/CalculaFatorial(denominador);

		printf("\n%lf",soma);
		
		denominador ++;
		numerador++;
		contador++;
		
	}
	
	printf("\nResultado :%lf",soma);
	
	
		return 0;
}
