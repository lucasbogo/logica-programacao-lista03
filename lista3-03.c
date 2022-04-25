#include <stdio.h>


int main()
{
	
	int num;
 
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
 
        if (num >=10 && num <= 100)
        printf("\nNumero esta entre 10 e 100\n");
 
        else
        printf("\nNumero nao esta entre 10 e 100\n");      
         
    return 0;

}
