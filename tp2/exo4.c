#include<stdlib.h>
#include<stdio.h>

int main (void){

	/*Déclarer les variables*/
	int A;
	
	/*Saisir des données avec l'affichage*/
	printf("Saisir un Nombre entier dans la variable ");
	scanf("%d",&A);

if (((A<<31)>>31)==0){
	printf("La valeur est pair. \n");}
else{	
	printf("La valeur est impair. \n");}

return EXIT_SUCCESS;
}
