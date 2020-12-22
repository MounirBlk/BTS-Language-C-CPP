#include <stdio.h>
#include <stdlib.h>
#define N 3

int moyenne(int Tab[]);  
int minimum(int tab[]); 


int main(void){
  /*Déclaration de variables */
  int T1[N]={50,8,50};
  int moy,min;

  
  moy = moyenne(T1);
  min = minimum(T1);

  printf("La moyenne est %d\n",moy);
  printf("La valeur mini est %d\n",min);

 return 0;
}

int moyenne(int tab[N]){
 int i,somme,moyen;
 somme = 0;
 for(i=0;i<N;i=i+1){
    somme = somme+tab[i];
 }
 moyen = somme/N;

 return moyen;
}

int minimum(int tab[N]){
int mini,i;

  mini = tab[1];
  
  for(i=1;i<N;i=i+1){
    if(tab[i]<mini)
      mini = tab[i];
  }

  return mini;
}
