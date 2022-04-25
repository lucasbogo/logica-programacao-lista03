#include <stdio.h>


int main()
{
	
	int num;
 
 
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
 
        if (num == 0)
        printf("\n numero NULO\n");
 
        else if (num < 0) 
        printf("\n numero NEGATIVO\n");
 
        else if (num > 0)
        printf("\nPOSITIVO\n");
 
    return 0;

}