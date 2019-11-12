/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company Devcated
	@since Oct 20, 2019

	Exemplos de uso da função printf com caracteres.
	Consulte a tabela ASCII para saber os códigos numéricos dos caracteres.
*/
#include <stdio.h>

int main()
{

	// imprimindo caracter
	printf("Letra: %c\n", 'a');
	printf("Letra: %c\n", 'A');
	printf("Digito: %c\n", '0');
	printf("Digito: %c\n", '9');

	// ???
	printf("???: %d\n", 'a'); // 'a' = 97 = 0110 0001
	printf("???: %d\n", 'A'); // 'A' = 65 = 0100 0001

	// ???
	printf("???: %c\n", 98); // 98 = 'b' = 0110 0010
	printf("???: %c\n", 66); // 66 = 'B' = 0100 0001

	printf("Imprimindo o simbolo: %%\n");

	return 0;
}