#include <stdio.h>
#include <stdlib.h>
#define c 3
#define l 2

int main (void){
  
  /* Déclaration des variables */
  int tabM[l][c],tabMM[l*c],m;
  int sommeligne[l],i,j,diag,petit,impair,unsurdeux;
  
  /* Remplissage du tableau */
  for (i=0; i<l; i++){
    for (j=0; j<c; j++){
      printf ("Saisir les valeurs entieres du tableau [%d][%d]: ",i,j );
      scanf("%d",&tabM[i][j]); 
    }
  }
  
  /*Affichage du tableau*/  
  for (i=0; i<l; i++){
    for (j=0; j<c; j++){
      printf ("| %3d ",tabM[i][j]);
    }
    printf ("\n");
  }
  printf ("\n");
  
  /*Calcul et affichage de la somme des éléments de chaque ligne du tableau*/
  for (i=0; i<l; i++){
    sommeligne[i]=0;
  }
  for (i=0; i<l; i++){
    for (j=0; j<c; j++){
      sommeligne[i]=sommeligne[i]+tabM[i][j];
    }
  }
  j=1;
  for(i=0; i<l; i++){
    printf("la somme des elements de la ligne %d est egale a %d\n",j,sommeligne[i]);
    j++;
  }
  printf ("\n");
  
  /*Calcul et affichage de la somme des éléments diagonaux du tableau */
  petit = c;
  if(l<c)
    petit = l;
  diag=0;
  for(i=0; i<petit; i++)
    {
      diag=diag+tabM[i][i];
    }
  printf("la somme des elements diagonaux du tableau est : %d \n\n",diag);
  
  /*Calcul et affichage de la somme des éléments de chaque colonne impaire du tableau*/
  impair=0;
  for(i=1; i<c; i=i+2){
    for(j=0; j<l; j++){
      impair=impair+tabM[j][i];
    }
  }
  printf("la somme des elements des colonnes impaires du tableau est : %d \n",impair);
  
  /*calcul de la somme des elements des colonnes un sur deux */
  /*  
      if( (c%2)==0){
      for(i=0; i<c; i=i+2){
      for(j=0; j<l; j++){
      unsurdeux= unsurdeux+tabM[j][i];
      }
      }
      }
      else{ 
      for(i=0; i<l; i++){
      if( (c%2) !=0){
      for(j=2; j<c; j=j+2){
      unsurdeux=unsurdeux+tabM[i][j];
      }
      }
      else {
      for(j=0; j<c; j=j+2){
      unsurdeux=unsurdeux+tabM[i][j];
      }
      }
      }	
      }

      /*affichage du resultat*/
  /* printf("\nLa somme des elements un sur deux du tableau est : %d \n",unsurdeux);*/
  
  /*Calcule de la somme des elements des colonnes un sur deux (tab 1 dimension)*/
  for (i=0; i<l; i++){
    for (j=0; j<c; j++){
      tabMM[m]=tabM[i][j];
      m = m+1;
    }
  }
  unsurdeux = 0;
  for(i=0;i<l*c;i=i+2){
    
    unsurdeux = unsurdeux+tabMM[i];
    
  }
  
  printf("la somme pris un sur deux vaut %d\n",unsurdeux);
  return EXIT_SUCCESS ;
}
