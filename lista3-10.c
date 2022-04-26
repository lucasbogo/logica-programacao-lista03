#include <stdio.h>


int main()
{

    int num,a,resto;

        printf("informe numero com 3 digitos: ");
        scanf("%d",&num);

        a = num%1000/100;
        printf("\nO numero da casa centena e': %d\n", a);   
    
        resto = a % 2;
    
        if (resto == 0)
        printf("\nEsse numero e':PAR\n");

        else
        printf("\nEsse numero e':IMPAR\n");
        
    
    return 0;
}
   