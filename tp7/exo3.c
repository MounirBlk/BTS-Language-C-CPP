#include <stdio.h>
#include <stdlib.h>


/*--------------------------PROGRAMME PRINCIPALE---------------------------*/
int main (void){
  /* Déclaration des variables */
  int i;
  int *ptr;
  i=15;


  ptr=&i;
 printf("La valeur de i est: %d\n",*ptr);
 *ptr=*ptr+10;
 printf("La valeur de i est: %d\n",*ptr);
  *ptr=*ptr+1;
 printf("La valeur de i est: %d\n",*ptr);
  --*ptr;
  printf("La valeur de i est: %d\n",*ptr);

  return EXIT_SUCCESS;
}

/*-------------------------------------------------------------------------*/

