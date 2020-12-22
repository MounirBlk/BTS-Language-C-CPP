#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  
  
  /*Déclaration des variables*/
  char chaine[10],tampon,chaine1[10],chaine2[10];
  int i,flag,taille1,taille2,taille;
  

  
  /*Saisie de la chaine de caractere */
  printf("Entrez la 1ere chaine de caractere: ");
  scanf("%s",chaine1);
  
  printf("Entrez la 2eme chaine de caractere: ");
  scanf("%s",chaine2);
 
  
  /*Determination de la taille de la chaine */
  taille1=strlen(chaine1);
  taille2=strlen(chaine2);

  
  /*Comparaison de chaine */
  
  flag=0;
  if (taille1==taille2){
    for(i=0;i<taille1;i++)
      if (chaine1[i]==chaine2[i])
	flag=1; 
  }
      else{
	flag=0;}

    if(flag==1)
      printf("Les chaines sont identiques\n");
    else{
      printf("Les chaines sont differentes\n");
    }   
    return EXIT_SUCCESS;
}
