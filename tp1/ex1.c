#include <stdlib.h>
#include <stdio.h>

int main (void)
{ 
int nb1,nb2,somme;
 printf("Veullez saisir votre 1er nombre ");
 scanf("%d,&nb1");
 printf("Veullez saisir votre 2ème nombre ");
 scanf("%d,&nb2");

somme=nb1+nb2;
printf("la somme de %d et de %d est égale à %d",nb1,nb2,somme);

return EXIT_SUCCESS;

