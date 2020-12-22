#include<stdio.h>
#include<stdlib.h>
#define N 5

int main(void){
  /*Declaration des variables*/
  int T1[N]={1,7,8,4,27};
  int T2[N]={1,7,8,4,7};
  int i,flag;

  /*Initialisation*/
  i=0;
  flag=1;

  do{
    if(T1[i]!=T2[i]){
      flag=0;
    }
    i=i+1;
  }
  while(i!=N && flag==1);

  /*Condition de test si les tableaux sont differents ou non*/
  if(flag==0){
    printf("Les tableaux sont différents à l'indice:%d\n",i);
  }
  else
    {
      printf("Les tableaux sont identiques\n");
    }
    
  return EXIT_SUCCESS;
}
