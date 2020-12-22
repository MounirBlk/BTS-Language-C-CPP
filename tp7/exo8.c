#include <stdio.h>
#include <stdlib.h>
#define N 10

/*Prototypes*/
void MinMax(int *p,int *Min,int *Max);

/*--------------------------PROGRAMME PRINCIPALE---------------------------*/
int main (void){
  
  /*Déclaration des variables*/
  int tab[N]={0,2,5,8,-5,3,4,8,2,18};
  int Valmini,Valmaxi;

  MinMax(tab,&Valmini,&Valmaxi);

  printf("\nMinimum est :%d\n",Valmini);
  printf("Maximum est :%d\n\n",Valmaxi);
  
  return EXIT_SUCCESS;
}

/*-------------------------------------------------------------------------*/
void MinMax(int *p,int *Min,int *Max){

 /*Déclaration des variables*/
  int i;

  /*Initialisation des variables*/
  *Min=*p;
  *Max=*p;
  for(i=0;i<N;i++){
    if(*(p+i)<*Min)
      *Min=*(p+i);
   if(*(p+i)>*Max)
      *Max=*(p+i);
}
}
/*-------------------------------------------------------------------------*/
