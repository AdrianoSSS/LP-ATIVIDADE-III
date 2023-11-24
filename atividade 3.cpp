#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nomes[250];
    int numeros;
    char  escolha;
  
   
   

    do
    {
    
    	 system ("cls  ||clear");  
       
	  	printf("digite o nome : \n");
    	scanf("%s",&nomes);
    	 
    	
    	printf("digite o numero : \n");
    	scanf("%d",&numeros);
    	
      system ("cls  ||clear");    
    	
    	
        printf("-----DESEJA CALCULAR ADCIONAR MAIS ALGUEM ?-----\n");
        printf(" 1 || SIM\n");
        printf(" 2 || NÃO\n");
        printf("Digite sua escolha :\n");
        scanf("%s", &escolha);

     
     
    } while (escolha == '2');
    
	
	 printf("~~~~~~~~Contatos~~~~~~~~\n\n");
            printf("nomes : %s \n", nomes);
            printf("numeros: %d \n", numeros);		
	return 0;
}
			 	  
	 

   
       

  
   
   

       
