#include <stdio.h>
#include <stdlib.h>
#define N 3
/* déclaration de fonctions */
void saisieTab(int tab[]);          // prototype pour la saisie de valeurs
void minmax(int tab[],int pablo[]); // prototype pour déterminer le plus grand et le plus petit
void  produit(int toto[],int tyty[],int tltl[]);  //  prototype pour multiplier terme à terme
void triD(int papa[]); // prototype pour réaliser un tri décroissant
/* fonction principale */
int main(void){
  int i,T1[N],T2[N],miMa[2],stockage[1];
  saisieTab(T1);
  printf("Saisie du deuxieme tableau maintenant\n");
  saisieTab(T2);
  minmax(T1,miMa);
  printf("Le plus petit est %d\n",miMa[0]);
  printf("Le plus grand est %d\n",miMa[1]);
  minmax(T2,miMa);
  printf("Le plus petit est %d\n",miMa[0]);
  printf("Le plus grand est %d\n",miMa[1]);
  produit(T1,T2,stockage);
  printf("le produit des elements des deux tableau vaut %d\n",stockage[1]);
  printf("Procedons au tri à bulle des deux tableaux \n");
  triD(T1);
  for(i=0;i<N;i=i+1)
    {
      printf("%d ",T1[i]);
    }
  triD(T2);
  for(i=0;i<N;i=i+1)
    {
      printf("%d ",T2[i]);
    }
  return EXIT_SUCCESS;
}

/* définition de fonctions */
void saisieTab(int tab[N]){
  int i;
  for(i=0;i<N;i=i+1){
    printf("entrez l'element de rang %d : ",i);
    scanf("%d",&tab[i]);
  }
}

void minmax(int tab[N],int mM[2]){
  int grand,petit,i;
  petit = tab[0];
  for(i=0;i<N;i=i+1){
    if(tab[i]<petit)
      petit = tab[i];
  }
  mM[0]= petit;

  grand = tab[0];
   for(i=0;i<N;i=i+1){
    if(tab[i]>grand)
      grand = tab[i];
  }
  mM[1]=grand;
}

void  produit(int stock[N],int stock2[N],int stick[1]){
  int i,result;
  result = 1;
  for(i=0;i<N;i=i+1){
    result = result*stock[i]*stock2[i];
  }
  stick[1]=result;
}

void triD(int talbi[]){
  int i,j,tampon;
  for(i=0;i<(N-1);i=i+1){
    for(j=0;j<(N-i);j=j+1){
      if(talbi[j]<talbi[j+1]){
	tampon = talbi[j];
	talbi[j] = talbi[j+1];
	talbi[j+1] = tampon;
      }
    }
  }
}
