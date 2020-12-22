#include <stdio.h>
#include <stdlib.h>


/*--------------------------PROGRAMME PRINCIPALE---------------------------*/
int main (void){
  /* Déclaration des variables */
  float a;
  float *b;

  a=10.0;
  b=&a;
  *b=*b/5;
  printf("La valeur de a est: %f\n",*b);
 printf("La valeur de a est: %f\n",a);

  return EXIT_SUCCESS;
}

/*-------------------------------------------------------------------------*/

