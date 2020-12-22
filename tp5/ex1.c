#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  /*déclaration des variables*/
  int taille;
  char chaine[10];
  
  /*Saisie de la chaine de caractères*/
  printf("Entrez une chaine de caractères de 9 caractères au max: "); 
  scanf("%s",chaine);
  
  /*Initialisation des valeurs*/
  taille=0;
  
  /*Boucle permettant de compter le nombre de caractère*/
  while(chaine[taille]!=0){
    taille=taille+1;
  }
  printf("\nLa taille de la chaine vaut %d \n",taille);
  
  return EXIT_SUCCESS;
}
