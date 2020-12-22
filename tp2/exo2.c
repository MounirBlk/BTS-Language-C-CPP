#include<stdlib.h>
#include<stdio.h>

int main (void){

	/*Déclarer les variables*/
	float A,B;
	
	/*Saisir des données avec l'affichage*/
	printf("Saisir un 1er Nombre réel dans la variable ");
	scanf("%f",&A);

	printf("Saisir un 2ème Nombre réel dans la variable ");
	scanf("%f",&B);

if (A<B){
	printf("Les valeurs saisies sont croissant \n");}
else{	
	printf("Les valeurs saisies sont décroissant \n");}

return EXIT_SUCCESS;
}
	
