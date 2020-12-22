#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  
  /*déclaration des variables*/
  char chaine[10],tampon;
  int i,taille;
  
  /*Initialisation de la chaine*/
  for(i=0;i<10;i++){
    chaine[i]=';';
  }
  /*Saisie de la chaine*/
  printf("Entrer une chaine: ");
  scanf("%s",chaine);
  
  /*Affichage avant traitement*/
  for(i=0;i<10;i++){
    printf("%x",chaine[i]);
  }
  printf("\n");
  
  /*Détermination de la taille de la chaine*/
  taille=0; 
  while(chaine[taille]!=0){
    taille=taille+1;
  } 
  
  /*Inversion de la chaine*/
  for(i=0;i<taille/2;i++){
    tampon=chaine[i];
    chaine[i]=chaine[taille-1-i];
    chaine[taille-1-i]=tampon;  
  }
  printf("%s",chaine);
  printf("\n");
  
  return EXIT_SUCCESS;
}
