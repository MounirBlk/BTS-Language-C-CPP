#include<stdio.h>
#include<stdlib.h>
#define N 10

int main(void){
  
  /*Déclaration des variables*/
  int i, test, mod, j;
  int Tab[N];
  
  for(i=0;i<N;i++){
    Tab[i]=1;
  }
  
  /*Les N premiers nombres premiers*/
  Tab[0]=2;
  test=3;
  
  for(i=0;i<N;i++){
    j=0;
    while((test%Tab[j])!=0)
      j=j+1;

if(Tab[j]==1){
      Tab[j]=test;
    }else{
      i--;
      test=test+1;
    }
  }
  
  printf("Les %d premiers nombres premiers sont :\n\t",N);
  
  for(i=0;i<N;i++){
    printf("%d\t", Tab[i]);
  }
  
  printf("\n");
  return EXIT_SUCCESS;
}





