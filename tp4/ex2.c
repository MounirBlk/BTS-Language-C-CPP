#include <stdio.h>
#include <stdlib.h>
int main(void){
  /*déclaration des variables*/
  int Tab[10], i, j;
  /*Remplissage du tableau*/
  for(i=0; i<10; i++)
    {
      Tab[i]=i+1;
    }
  /*affichage du tableau*/
  for(j=0; j<3; j++)
    {
      for(i=0; i<10; i++)
	{
	  printf("%d ", Tab[i]);
	}
      printf("\n");
    }
  return EXIT_SUCCESS;
}
