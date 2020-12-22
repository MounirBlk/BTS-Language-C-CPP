#include <stdio.h>
#include <stdlib.h>

/*Prototype*/
int factor(int nbre);  
int saisieEntier(int Entier);
int parite(int Entier);

/*--------------------------PROGRAMME PRINCIPALE---------------------------*/
int main (void)
{
  
  /* Déclaration des variables */
  int factorielle,Entier,nbreParite;
  
  /*Appel de la fonction*/
  Entier = saisieEntier(Entier);
  factorielle = factor(Entier);
  nbreParite=parite(Entier);
  
  /*Affichage du résultat du factorielle*/
  printf("\nLe factorielle de %d est de %d\n\n",Entier,factorielle);
  if (nbreParite==0){
    printf("Le nombre Entier %d est pair\n\n",Entier);
  }
  else{
    printf("Le nombre Entier %d est impair\n\n",Entier);
  }
  
  return EXIT_SUCCESS;
}

/*-------------------------------------------------------------------------*/


/*Définition de fonction(saisieEntier)*/
int saisieEntier(int Entier){
  
  do{ 
    printf("\nVeuillez saisir une valeur entre 2 et 6: ");
    scanf("%d",&Entier);
  }while((Entier<2) || (Entier>6));
  
  return Entier;
}

/*Définition de fonction(factorielle)*/
int factor(int nbre)
{
  /* Déclaration des variables */
  int i,factor;
  
  /* Initialisation de variables */
  factor=1;
  
  /*Calcule du factorielle*/
  
  for(i=1;i<=nbre;i++)
    {
      factor = factor*i;
    }
  
  return factor;
}

/*Définition de fonction(Parite)*/
int parite(int Parite_nbre){
  
  /* Déclaration des variables */
  int flag;
  
  /*Nombre pair ou impair*/
  
  if (((Parite_nbre/2)*2)==Parite_nbre){
    flag=0;
  }
  else{
    flag=1;
  }
  return flag;
}
