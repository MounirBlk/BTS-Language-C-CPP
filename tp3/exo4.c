#include<stdlib.h>
#include<stdio.h>


int main (void){

	/*Déclarer les variables*/
	int i,N,nbespace,nbetoile,numligne;
	
	
	/*Initialisation des valeurs*/
	

	/*Saisir des données avec l'affichage*/
	
	printf("Entrer le nombre de ligne pour le triangle: ");
	scanf("%d",&N);


	for(numligne=1; numligne<=N; numligne++){
		nbespace=N-numligne;
		nbetoile=2*numligne-1;
		
	for(i=1; i<=nbespace; i++){
		printf(" ");
		}
	for(i=1; i<=nbetoile; i++){
		printf("*");
		}
		printf("\n");
		}
	
	

return EXIT_SUCCESS;
}
