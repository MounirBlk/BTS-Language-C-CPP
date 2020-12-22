#include<stdlib.h>
#include<stdio.h>

int main (void){

	/*Déclarer les variables*/
	float A;
	
	/*Saisir des données avec l'affichage*/
	printf("Saisir un Nombre réel dans la variable ");
	scanf("%f",&A);

if ((A>10) && (A<20)){
	printf("La valeur est compise entre 10 et 20 \n");}
else{	
	printf("La valeur n'est pas comprise entre 10 et 20 \n");}

return EXIT_SUCCESS;
}
