#include <stdio.h>
#include <ctype.h>


int main(void)
{
	
	char estado;
 
        printf("Escolha uma letra para informar seu estado civil");
        printf("\nS - solteiro/ C - casado/ D - divorciado/ V - viuvo\n");
        scanf("%c", &estado);
 
        estado=toupper(estado);
 
        switch (estado){  

        case 'S':printf("\nVoce marcou: Solteiro\n");
             break;
        case 'C':printf("\nVoce marcou: Casado\n");
             break;
        case 'D':printf("\nVoce marcou: Divorciado\n");
             break;  
        case 'V':printf("\nVoce marcou: Viuvo\n");  }
			                       

    return 0;

}