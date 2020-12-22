#include <stdio.h>
#include <stdlib.h>


/*--------------------------PROGRAMME PRINCIPALE---------------------------*/
int main (void){
  /* Déclaration des variables */
  int x;
  int y;
  int *p;
  int **pp;

  /*Initialisation*/
  x=1;
  y=2;

  p=&x;
  printf("La valeur de p est: %d\n",*p);

  x=x+y;
  printf("La valeur de x est: %d\n",x);

  pp=&p;
  printf("La valeur de pp est: %d\n",**pp);

  return EXIT_SUCCESS;
}

/*-------------------------------------------------------------------------*/

