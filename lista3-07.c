#include <stdio.h>


int main()
{

    float A,B,C;

        printf("Digite o tamanho do lado A de seu triangulo: ");
        scanf("%f",&A);

        printf("Digite o tamanho do lado B de seu triangulo: ");
        scanf("%f",&B);

        printf("Digite o tamanho do lado C de seu triangulo: ");
        scanf("%f",&C);


            if (A==B && B==C) 
            printf("O triangulo eh Equilatero."); 

            else  if(A==B||A==C||B==C)
            printf("O triangulo eh Isoceles.");

            else
            printf("Triangulo eh Escaleno"); 


    return 0;

}