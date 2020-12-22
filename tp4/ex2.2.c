#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  /*Déclaration des variables*/
  int Tabm[3][10],i,j;
  
  /*Remplissage du tableau*/
  
  for(i=0;i<3;i++)
    {
      
      for(j=0;j<10;j++)
	{
	  Tabm[i][j]=i+1;
	  Tabm[i][j]=j+1;
	  /*Affichage du tableau avec les variables j(3 lignes) et i(10 collones)*/
	  
	  printf("%d ",Tabm[i][j]);
	}
      printf("\n");
    }
  
  return EXIT_SUCCESS;
}
