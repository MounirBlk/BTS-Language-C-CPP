#include<stdlib.h>
#include<stdio.h>
/*mdp=mo95*/

int main (void){
  
  /*Déclaration des variables*/
  int i,flag;
  char code1,code2,code3,code4,bidon;
  
  /*Initialisation des variables */
  flag=0;
  i=1;
  
  /*Vérification du code de sécurité*/
  
  do{
    printf("Entrer le code de sécurité: ");
    scanf("%c%c%c%c",&code1,&code2,&code3,&code4,&bidon);
    
    printf("Le code saisie est: %c%c%c%c \n",code1,code2,code3,code4);
    if ((code1=='m')&&(code2=='o')&&(code3=='9')&&(code4=='5'))
      flag=1;
    if (flag==0 && i==2)
      printf("Attention il ne vous reste qu'un seul essaie \n");
    i++;
  }
  
  
  while (flag==0 && i<=3);
{
    if (flag==0)
      printf("Acces refuser \n");
    else
      printf ("Authentification validée \n");
  }
  
  return EXIT_SUCCESS;
}
