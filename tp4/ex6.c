#include<stdio.h>
#include<stdlib.h>

int main(void){

  /* Declaration des variables */
  char mot1[20], mot2[20];
  int i, taille1, taille2, flag;
  char blanc;

  /* Saisi de mot1 et de mot2 */
  i=0;
  do{
    printf("pour le mot1, entrez %d lettre : ", i);
    scanf("%c%c",&mot1[i],&blanc);
    i=i+1;
  }
  while(i<20 && mot1[i-1] != '.');
    

/* la taille du mot1 et du mot2 */
  i=0;
  taille1=0;
  while(mot1[i] != '.' && i<20){
    taille1=taille1+1;
    i=i+1;
  }
  printf("la taille 1 est : %d \n",taille1);
 
for(i=0; i<taille1; i++){
    printf("|%c",mot1[i]);
  }
  printf("| \n");
  
  i=0;
  do{
    printf("pour le mot2, entrez %d lettre : ",i);
    scanf("%c%c",&mot2[i],&blanc);
    i=i+1;
  }
  while(i<20 && mot2[i-1] != '.');

 for(i=0; i<mot2[i]; i++){
    printf("|%c",mot2[i]);
  }
  printf("| \n");

  /* Determiner la taille du mot1 et du mot2 */
  i=0;
  taille1=0;
  while(mot1[i] != '.' && i<20){
    taille1=taille1+1;
    i=i+1;
  }
  printf("la taille 1 est : %d \n",taille1);
 
  i=0;
  taille2=0;
  while(mot2[i] != '.' && i<20){
    taille2=taille2+1;
    i=i+1;
  }
  printf("la taille 2 est : %d \n",taille2);

  /* Comparaison de mot1 et mot 2 */
  flag='v';
  if(taille1=taille2){
    for(i=0; i<taille1; i++){
      if(mot1[i] != mot2[i]){
	flag='f';
      }
    }
  }
  if(flag=='v'){
    printf("Les chaines de caracteres sont identiques \n");
  }
  else{
    printf("Les chaines de caracteres sont differents \n");
  }
}
