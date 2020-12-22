#include<stdio.h>
#include<stdlib.h>
#define N 10

int main(void){
  int i, test, mod, cpt;
  printf("Les %d premiers nombres premiers sont:\n2\t",N);
  test=3; 
  cpt=1;
  i=1;
  while(cpt<=N-1){
    mod=2;
    while((test%mod)!=0){
      mod++;}
	if(mod==test){
	  printf("%d\t",test);
	  cpt++;
	}
	test++;
      }
  
  printf("\n\n");
  return EXIT_SUCCESS;
}
