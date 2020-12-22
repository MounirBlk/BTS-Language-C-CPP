#include <stdio.h>
#include <stdlib.h>


/*Prototypes*/


/*--------------------------PROGRAMME PRINCIPALE---------------------------*/
int main (void){
  
  /*Déclaration des variables*/
  int i,nb,*tab1,*tab2,taille;

  /*Initialisation des variables*/
  taille=sizeof(int);
  tab1=(int *) malloc(2*taille);
  tab2=(int *) malloc(10*taille);

  printf("\nLa dimension d'un entier est: %d octets\n",taille);
  printf("La mémoire allouée est de: %d octets\n",2*taille);  

  printf("L'adresse du bloc de mémoire(tab1) alloué est:%p\n",tab1);
  printf("L'adresse du bloc de mémoire(tab2) alloué est:%p\n\n",tab2);

  for (i=0;i<2;i++){
    printf("Entrez l'element de rang i (tab1):");
    scanf("%d",(tab1+i));
  }

  for (i=0;i<2;i++){
    printf("Entrez l'element de rang i (tab2):");
    scanf("%d",(tab2+i));
  }

  printf("\nCombien de mémoire pour la 1ere zone ?");
  scanf("%d",&nb);

  tab1=(int*)realloc(tab1,(2+nb)*(taille));
  tab2=(int*)realloc(tab2,(10+nb)*(taille));

  printf("\nL'adresse du bloc de mémoire(tab1) alloué est:%p\n",tab1);
  printf("L'adresse du bloc de mémoire(tab2) alloué est:%p\n\n",tab2);

  return EXIT_SUCCESS;
}
/*-------------------------------------------------------------------------*/
