#include <stdio.h>
#include <stdlib.h>
#define N 2

int main(void){
  
  /*déclaration des variables*/
  int Tab[5],i,somme,tamp;
  
  
  /*saisie des éléments du tableau*/
  for(i=0; i<5; i++){
    printf("Entrez l'élément d'indice: ");
    scanf("%d", &Tab[i]);
  }
  
  /*Calcul et affichage de la somme des éléments du tableau*/
  somme=0;
  for(i=0; i<5; i++){
    somme=somme+Tab[i];
  }
  printf("La somme des éléments du tableau est égale à %d\n", somme);
  
  
  /*Affichage du tableau avant inversion*/
  printf("Affichage du tableau avant inversion: ");
  for(i=0; i<5; i++){
    printf("%d ", Tab[i]);
  }
  
  
  /*Inversion du tableau*/
  for(i=0; i<2; i++){
    
    tamp=Tab[i];
    Tab[i]=Tab[5-i-1];
    Tab[5-i-1]=tamp;
    printf("\n");
  }
  
  
  /*Affichage du tableau après inversion*/
  printf("Affichage du tableau après inversion: ");
  for(i=0; i<5; i++){
    
    printf("%d ", Tab[i]);
  }
  printf("\n");
  
  return EXIT_SUCCESS; 
}
