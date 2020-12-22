#include<stdio.h>
#include<stdlib.h>
#define N 8

int main(void){
  
  float moyenne,somme,nombre;
  int i;
  
  somme=0;
  for(i=1; i<=N; i=i+1)
    {
      printf("Entrez une note de TP %d: ",i);
      scanf("%f",&nombre);
      
      somme=somme+nombre;
    }
  moyenne=somme/N;	
  printf("la somme est %f",somme);
  printf("la moyenne est %f",moyenne);
  
  return EXIT_SUCCESS; 
}


