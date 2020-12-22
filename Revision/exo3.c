#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10

/* déclaration de prototype */
int nb_occurence(char chaine[],char val);

int main(void){
  
  /* déclaration de variables */
  char chaine[N];
  char lettre;
  int i,foncti;
  
  /*saisi des données */
  printf("Veuiller entrer votre chaine de caractere: ");
  fgets(chaine, sizeof chaine, stdin);
  
  printf("Veuiller entrer la lettre voulu: ");
  scanf("%c",&lettre);
  
  foncti = nb_occurence(chaine,lettre);
  
  /* affichage des données */
  printf("%s\n",chaine);
  printf("il y a %d fois la lettre %c dans la chaine\n",foncti,lettre);
  
  return EXIT_SUCCESS;
}


/* définition de la fonction */

int nb_occurence(char chaine[N],char val){
  int taille,i;

   taille = 0;
  for(i=0;i<10;i=i+1){
    if(chaine[i]==val){
      taille = taille+1;
    }
  }
  return taille;
}  
