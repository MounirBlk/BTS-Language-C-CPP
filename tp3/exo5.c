#include<stdlib.h>
#include<stdio.h>


int main (void){

	/*Déclarer les variables*/
	int a,b,mod;
	
	
	/*Initialisation des valeurs*/
	

	/*Saisir des données avec l'affichage*/
	
	printf("Entrer un 1er nombre: ");
	scanf("%d",&a);

	printf("Entrer un 2eme nombre: ");
	scanf("%d",&b);


	while (b>0){
		mod=(a%b);
		a=b;
		b=mod;
		}
	printf("Le PGCD des nombres saisis est égal à: %d\n",a);
	
	

return EXIT_SUCCESS;
}
