#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Prototype*/
int nombrerandom (int randomN);  

/*--------------------------PROGRAMME PRINCIPALE---------------------------*/
int main (void)
{
  
  /* Déclaration des variables */
  int Resultat,nombrerand;
  
  /*Appel de la fonction*/
  Resultat=nombrerandom(nombrerand);

  
  return EXIT_SUCCESS;
}

/*-------------------------------------------------------------------------*/


/*Définition de fonction(rand)*/
int nombrerandom (int randomN){
  
   /* Déclaration des variables */
  int nombrerand;

  /*Valeur Aléatoire*/
  do{
    printf("Veuillez entrer une valeur: ");
    scanf("%d",&nombrerand);
  }
  while(nombrerand<11);

    srand(time(NULL));
    randomN=rand() % (nombrerand - 8) + 8;
  
  
  /*Affichage du résultat*/
  printf("\nLa valeur aléaroire entre 8 et %d est de %d\n\n",nombrerand,randomN);
  
  return nombrerand;
}



