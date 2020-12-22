#include<stdio.h>
#include<stdlib.h>

/*Prototype*/
float fonctionINV(float a);

/*PROGRAMME PRINCIPALE*/
int main(void){
  
  /* Déclaration des variables */
  float nbre,inverse;
  
  /*Saisis des données*/
  printf("Veuiller entrez un nombre réelle: ");
  scanf("%f",&nbre);
  
  /*Appel de la fonction*/
  inverse=fonctionINV(nbre);
  
  /*Resultat de l'inversement*/
  printf("L'inverse de %.2f est de %.3f\n",nbre,inverse);
  
  return EXIT_SUCCESS;
}

/*Définition de fonction*/
float fonctionINV(float a){
  
  /* Déclaration des variables */
  float Inversement;
  
  /*Inversement de la valeur*/
  Inversement=1/a;
  if(a==0){
    printf("Vous ne pouvez pas diviser par 0.\n");
    exit(0);  
  }
  return Inversement;
}
