#include <stdio.h>
#include <stdlib.h>

/*--------------------------PROGRAMME PRINCIPALE---------------------------*/


int main (void){
  
  /*Déclaration des variables*/
  int A[10] = {-3,4,0,-7,3,8,0,-1,4,-9};
  int B[10];
  int *pA,*pB;
  int i;
  
  /*Initialisation des variables*/
  pA = A;
  pB = B;
  
   
  for(i=0;i<10;i++){
    *(pB+i) = *(pA+9-i);
  }
  

  printf("Affichage du tableau A :");
  for(i=0;i<10;i++){
    printf("|%d",A[i]);
    
  }
  
  printf("|\n");
  
  printf("Affichage du tableau B :");
  for(i=0;i<10;i++){
    printf("|%d",B[i]);
    
  }
  printf("|\n");
  
  return EXIT_SUCCESS;
}

/*-------------------------------------------------------------------------*/
