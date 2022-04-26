#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float numero1;

        printf("Informe um numero: ");
        scanf("%f",&numero1);

        if (numero1 > 0)
        printf("\nA raiz quadrado do numero e %3.2f\n\n", sqrt(numero1));

        else
        printf("\nO quadrado do numero e %3.2f\n\n", pow(numero1,2));

        system("PAUSE");
        
    return 0;
}