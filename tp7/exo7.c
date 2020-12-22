#include <stdio.h>
#include <stdlib.h>
#define L 3
#define C 4

/*Prototypes*/
void rempliTab(int *naruto);
void afficheTab(int *luffy);
void diag(int *sangoku);


/*--------------------------PROGRAMME PRINCIPALE---------------------------*/


int main (void){

  /*Déclaration des variables*/
  int tab[L][C];
  int i,j;
  int *p;
  p=&tab[0][0];
  rempliTab(p);

  diag(p);
  afficheTab(p);

  printf("\n");

  return EXIT_SUCCESS;
}

/*-------------------------------------------------------------------------*/
void rempliTab(int *naruto){
  int i,j;

  /*Saisie des elements*/
 for(i=0;i<L*C;i=i+1){
   printf("Saisir l'element de rang |%d|:",i);
    scanf("%d",(naruto+i));
  }
  }

/*-------------------------------------------------------------------------*/
void afficheTab(int *luffy){
    int i;
  printf("Affichage du tableau : \n");

   for(i=0;i<L*C;i=i+1){
        if(i>1 &&(i%C)==0){
            printf("\n");
        }
        printf("| %2d ",*(luffy+i));
   }

}
/*-------------------------------------------------------------------------*/
void diag(int *sangoku){
  int i,cpt;

  /*Initialisation*/
  cpt=0;

  for(i=0;i<L;i++){
    *(sangoku+cpt)=1;
    cpt=cpt+C+1;

  }
}
