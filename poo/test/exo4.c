#include<stdlib.h>
#include<stdio.h>


int main (void){

	/*Déclarer les variables*/
	int a,b,j,k,i,N,nbespace,nbetoile,numligne;
	

	
	printf("Entrer le nombre de ligne pour le triangle: ");
	scanf("%d",&N);


	for(numligne=1; numligne<=N; numligne++){
		nbespace=N-numligne;
		nbetoile=2*numligne-1;
		
	for(i=1; i<=nbespace; i++){
		printf("-");
		}
	for(i=1; i<=nbetoile; i++){
		printf("*");
		}
		printf("\n");
		}

	printf("\n");
	printf("Entrer la largeur du rectangle: ");
	scanf("%d",&a);	

	printf("Entrer la hauteur du rectangle: ");
	scanf("%d",&b);

	for(k=1;k<=b;k++){
	printf("\n");
	for(j=1;j<=a;j++){
	printf("*");
	}
	}
	printf("\n");

return EXIT_SUCCESS;
}
