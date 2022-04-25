#include<stdio.h>
#include<math.h>

int main()
{  

    float salario,aumento,novo;


        printf("Digite seu salario: ");
        scanf("%f",&salario);


            if (salario<=900.00){
                aumento = salario * 0.20;
	            novo = aumento + salario;
	            printf("novo salario = %.2f",novo); 
            }
	
            else if ((salario >=900.01) && (salario<=  1300.00)) {
                aumento = salario * 0.10;
	            novo = aumento + salario;
	            printf("novo salario = %.2f",novo);
            }

            else if ((salario >=1300.01) && (salario<= 1800.00)){
                aumento = salario * 0.05;
	            novo = aumento + salario;
	            printf("novo salario = %.2f",novo); 
            }

            if (salario >=1801.00 ){ 
                aumento = 0;
                printf (" salario alto - sem aumento"); 
            }


    return 0;

}