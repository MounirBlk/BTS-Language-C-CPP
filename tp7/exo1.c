#include <stdio.h>
#include <stdlib.h>


/*--------------------------PROGRAMME PRINCIPALE---------------------------*/
int main (void){
  /* Déclaration des variables */

  char c;
  char *pt_x;
  c='A';
  pt_x = &c;
  printf("La valeur de c vaut %C \n",*pt_x);

  return EXIT_SUCCESS;
}

/*-------------------------------------------------------------------------*/

