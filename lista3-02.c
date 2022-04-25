#include <stdio.h>


int main()
{
	
	
    int num,resto;
 
 
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
 
        resto = num % 3;
      
        if (resto == 0){
        printf("\n numero e' multiplo de 3\n");
 
        }else { 
        printf("\n numero nao e' multiplo de 3\n");
        
        }
   
 
    return 0;

}