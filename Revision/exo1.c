#include<stdio.h>
#include<stdlib.h>
#define N 8

/*Prototypes*/
void saisieTab(float note[N]);
float sommeTab(float note[N]);
void AfficheTab(float Affichage);

int main (void){
  int i;
  float note[N],total;
  
  saisieTab(note);
  total=sommeTab(note);
  AfficheTab(total);
  
  return EXIT_SUCCESS;
}

/*sommeTab*/
float sommeTab(float note[N]){
  float somme;
  int i;
  somme = 0;
  for(i=0;i<N;i++){
    somme=somme+note[i];
  }
}

/*saisieTab*/
void saisieTab(float note[N]){
  int i;
  for(i=0;i<N;i++){                                      
    printf("Veuiller saisir votre note n°%d :",i+1);
    scanf("%f",&note[i]);
    
  }
}

/*AffichageTab*/
void AfficheTab(float total){
  printf("\nLa somme des notes est %.2f",total);
  printf("\nLa moyenne des notes est %.2f\n",total/N);

}
