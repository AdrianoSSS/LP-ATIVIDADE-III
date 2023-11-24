#include <stdio.h>
#include <stdlib.h>

int main()
{
   float notas [5][3];
   char nomes [5][200];
   int idade [5]; 
   int i=0,j=0;
   float media[5];
   float soma [5];
   
   for(i=0;i<5;i++){
       printf("Digite seu nome :\n");
       scanf("%s",nomes[i]);
       
        printf("Digite sua idade :\n");
       scanf("%d",&idade[i]);
      
       
       for(j=0;j<3;j++)
       {
        printf("Digite a nota do aluno : \n");
        scanf("%f",&notas[i][j]);
        soma[i] += notas[i][j];
       }
      fflush(stdin);
      media[i] = soma[i]/3;
      
    system ("cls  ||clear");    
   }

   printf("\nExibindo as informações dos alunos...\n");
   for(i=0;i<5;i++){
       printf("\nnome : %s \n",nomes[i]);
       printf("idade : %d \n",idade[i]);
       printf("Media : %.1f \n", media[i]);
       for(j=0;j<3;j++)
       {
        printf("Notas : %.1f \n",notas[i][j]);
       }
       
        if (media[i] >= 7)
   {
   	printf("Aprovado!!");
   }else if (media[i] >= 5)
   {
   	printf("Recuperação!!");
   }
   else
   {
   	printf("Reprovado!!");
   }
   }
  
   return 0;
}
