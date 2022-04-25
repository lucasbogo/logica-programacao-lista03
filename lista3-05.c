#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	
	float a,b,c,delta,x1,x2,Xv,Yv;
 
        printf("Calculo para Delta");
        printf("\n informe o valor de A: ");
        scanf("%f", &a);
 
        printf("\n informe o valor de B: ");
        scanf("%f", &b);
 
        printf("\n informe o valor de C: ");
        scanf("%f", &c);
 
        delta = pow(b,2)-4*a*c;
 
            if (delta <0)
            {
            printf ("\nDelta e igual a %.2f", delta); 
 
            printf ("\n\nA equacao nao tem solucao real.\n\n");
            }
             else 
            {
                printf ("\nDelta igual a %.2f\n", delta);

                 x1=((-b)+sqrt(delta))/(2*a);

                 x2=((-b)-sqrt(delta))/(2*a);

                printf ("\nO x1=%.2f e o x2=%.2f\n\n", x1, x2);

                 Xv=-b/(2*a);

                 Yv=-(delta)/(4*a);

                printf ("\nO Xv=%.2f e o Yv=%.2f\n\n", Xv, Yv);
            }			                       

 return 0;

}