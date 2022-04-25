#include <stdio.h>   
#include <stdlib.h>  
#include <math.h>


int main()
{
    float altura,peso,imc;
    char sexo;

        printf("Digite seu sexo [F] ou [M]: ");
        scanf("%c",&sexo);
    
        printf("Digite sua altura: ");
        scanf("%f",&altura);
    
        printf("Digite seu peso: ");
        scanf("%f",&peso);

        imc = peso/(pow(altura,2));
   
        printf("\nseu IMC e': %.2f\n",imc);
    
            if (sexo == 'F'){
    
                if (imc<19){
                printf("\nAbaixo do peso\n");
                }

                else if(imc>=20 && imc<=23.9){
                printf("\nPeso normal\n");
                }

                 else if(imc>= 24 && imc<=28.9){
                printf("\nObesidade leve\n");
                }
    
                else if(imc>=29 && imc<=38.9){
                printf("\nObesidade moderada\n");
                }
        
                 if(imc>=39){
                printf("\nObesidade morbida\n"); 
                }
            }
                    if(sexo == 'M'){
		
		        if(imc<20){
                        printf("Abaixo do peso");
                        }
            
                        else if(imc>=20 && imc<=24.9){
                        printf("Peso normal");
                        }
    
                        else if(imc>= 25 && imc<=29.9){
                        printf("Obesidade leve");
                        }

                        else if(imc>=30 && imc<=39.9){
                        printf("Obesidade moderada");
                        }
    
                        if(imc>=40){
                        printf("Obesidade mórbida");
                        }
                    }
    return 0;
 
}
  
