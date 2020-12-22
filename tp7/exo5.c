#include <stdio.h>
#include <stdlib.h>


/*--------------------------PROGRAMME PRINCIPALE---------------------------*/
int main (void){
  /* Déclaration des variables */
  int A[]={9,15,26,28,33,45,46,51,52,67};
  int *ptr;
  ptr=A;


  printf("La valeur vaut %d\n",*ptr);

  printf("La valeur vaut %d\n",*ptr+2);

  printf("La valeur vaut %d\n",*(ptr+2));

  printf("La valeur vaut %p\n",&ptr+1);

  printf("La valeur vaut %p\n",&A[4]-3);

  printf("La valeur vaut %d\n",*(A+3));

  printf("La valeur vaut %ld\n",&A[7]-ptr);

  printf("La valeur vaut %d\n",*(ptr+*(ptr+8)-A[7]));

  return EXIT_SUCCESS;
}

/*-------------------------------------------------------------------------*/

