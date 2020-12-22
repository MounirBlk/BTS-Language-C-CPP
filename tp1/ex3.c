#include<stdlib.h>
#include<stdio.h>

int main (void){

	/*Déclarer les variables*/
	int n;
	float R,produit;

	/*Saisir des données avec l'affichage*/
	printf("Saisir un 1er nombre ");
	scanf("%d",&n);

	printf("Enter un multiplicateur entière au clavier ");
	scanf("%f",&R);

	/*Calcul produit*/
	produit = R*n;

	/*Affichage du produit*/
	printf("Le nombre %f multiplier par %d est égale à %f.\n",R,n,produit);

return EXIT_SUCCESS;
}

