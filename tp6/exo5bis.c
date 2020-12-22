#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Prototypes */
char choixFormeSaisie(); // Selection de la forme Cartesienne ou Polaire
void saisieCart(float tab[4]);
void saisiePol(float tab[4]);
void convCartPol(float tab[4]); // Conversion de la forme Cartesienne vers la forme Polaire
void convPolCart(float tab[4]); // Conversion de la forme Polaire vers la forme Cartesienne
void operation(float tab[4],float tab2[4],float tab3[4]); // prototype permettant de calculer les nombres complexes
void affichage(float tab[4]); // affichage du 1er complexe
void affichage2(float tab2[4]); // affichage du 2eme complexe
void affichage3(float tabresult[4]); // affichage du resultat des complexes garce a l'operation

/*--------------------------PROGRAMME PRINCIPALE---------------------------*/
int main(void){
    /*Declarations des variables*/
    float tab[4],tab2[4],tabresult[4];
    char choix;

    printf("Premiere saisie complexe:\n");
    /*Appel de fonction pour choisir la forme selectionner*/
    choix=choixFormeSaisie();

    if ((choix=='c')||(choix=='C')){
        saisieCart(tab);
    }
    if ((choix=='p')||(choix=='P')){
        saisiePol(tab);
    }

    /*Appel de fonction pour afficher la forme Cartesienne et Polaire du 1er complexe*/
    affichage(tab);

    printf("Seconde saisie complexe:\n");
    /*Appel de fonction pour choisir la forme selectionner*/
    choix=choixFormeSaisie();

    if ((choix=='c')||(choix=='C')){
        saisieCart(tab2);
    }
    if ((choix=='p')||(choix=='P')){
        saisiePol(tab2);
    }
    /*Appel de fonction pour afficher la forme Cartesienne et Polaire du 2eme complexe*/
    affichage2(tab2);

    /*Appel de la foncntion afin de calculer les nombres complexes avec une opération*/
    operation(tab,tab2,tabresult);

    /*Appel de fonction pour afficher le resultat de la forme Cartesienne et Polaire*/
    affichage3(tabresult);

    return EXIT_SUCCESS;
}
/*-------------------------------------------------------------------------*/

/* Fonction choixFormeSaisie */
char choixFormeSaisie(){

    char choix;

    do{
        printf("\nVeuiller choisir votre forme complexe: Cartesienne (c) ou Polaire (p) ?");
        scanf("%c",&choix);
    }
    while ((choix!='c')&&(choix!='C')&&(choix!='p')&&(choix!='P'));

    return choix;
}
/*-------------------------------------------------------------------------*/

/* Fonction saisieCart */
void saisieCart(float tab[4]){

    printf("\nVous avez choisi la forme cartesienne : Z=a+ib\n");
    printf("Entrez le nombre reel a: ");
    scanf("%f",&tab[0]);
    printf("Entrez le nombre imaginaire b: ");
    scanf("%f",&tab[1]);

    /*Appel de fonction afin de convertir le nombre complexe Cartesienne vers Polaire*/
    convCartPol(tab);
}
/*-------------------------------------------------------------------------*/

/* Fonction saisiePol */
void saisiePol(float tab[4]){

    printf("\nVous avez choisi la forme polaire : [module (r);argument (rho)]\n");
    printf("Entrez le module r: ");
    scanf("%f",&tab[2]);
    printf("Entrez l'argument rho: ");
    scanf("%f",&tab[3]);

    /*Appel de fonction afin de convertir le nombre complexe Polaire vers Cartesienne */
    convPolCart(tab);

}
/*-------------------------------------------------------------------------*/

/* Fonction convCartPol */
void convCartPol(float tab[4]){

    /*Conversion forme Cartesienne -> forme Polaire*/
    tab[2]=sqrt(pow(tab[0],2)+pow(tab[1],2));
    tab[3]=atan(tab[1]/tab[0]);

}
/*-------------------------------------------------------------------------*/

/* Fonction convPolCart */
void convPolCart(float tab[4]){

    /*Conversion forme Polaire -> forme Cartesienne*/
    tab[0]=tab[2]*cos(M_PI*tab[3]/180);
    tab[1]=tab[2]*sin(M_PI*tab[3]/180);

}
/*-------------------------------------------------------------------------*/

/* variable stockage qui est là pour renvoyer son contenu dans la fonction main */
/* sans avoir besoin de créer une fonction int mais void car il est interdit */
/* voire impossible de renvoyer un tableau vers la fonction main */

/* Fonction operation */
void operation(float tab[4],float tab2[4],float tab3[4]){
    char oper,vide;

    /*Selection de l'opérande*/
    printf("Choisissez votre operation arithmetique:(+),(-),(*),(/): ");
    scanf("%c%c",&vide,&oper);

    /*Calculateur de nombres complexes grace a une operation*/
    switch(oper){
    case '+':
        tab3[0]=tab[0]+tab2[0];
        tab3[1]=tab[1]+tab2[1];
        tab3[2]=sqrt(pow(tab3[0],2)+pow(tab3[1],2));
        tab3[3]=atan(tab3[1]/tab3[0]);
        break;
    case '-':
        tab3[0]=tab[0]-tab2[0];
        tab3[1]=tab[1]-tab2[1];
        tab3[2]=sqrt(pow(tab3[0],2)+pow(tab3[1],2));
        tab3[3]=atan(tab3[1]/tab3[0]);
        break;
    case '*':
        tab3[2]=tab[2]*tab2[2];
        tab3[3]=tab[3]*tab2[3];
        tab3[0]=tab3[2]*cos(M_PI*tab3[3]/180);
        tab3[1]=tab3[2]*sin(M_PI*tab3[3]/180);
        break;
    case '/':
        tab3[2]=tab[2]/tab2[2];
        tab3[3]=tab[2]/tab2[3];
        tab3[0]=tab3[2]*cos(M_PI*tab3[3]/180);
        tab3[1]=tab3[2]*sin(M_PI*tab3[3]/180);
        break;
    }
}
/*-------------------------------------------------------------------------*/

/* Fonction affichage */
void affichage(float tab[4]){

    /* Affichage des formes complexes en Cartesienne et Polaire pour le 1er nombre complexes*/
    printf("\nForme Cartesienne \t=\t %f + %f i\n",tab[0],tab[1]);
    printf("Forme Polaire \t=\t [%f ; %f]\n\n",tab[2],tab[3]);
}
/*-------------------------------------------------------------------------*/

/* Fonction affichage2 */
void affichage2(float tab2[4]){

    /* Affichage des formes complexes en Cartesienne et Polaire pour le 2eme nombre complexes*/
    printf("\nForme Cartesienne \t=\t %f + %f i\n",tab2[0],tab2[1]);
    printf("Forme Polaire \t=\t [%f ; %f]\n\n",tab2[2],tab2[3]);
}
/*-------------------------------------------------------------------------*/

/* Fonction affichage3 */
void affichage3(float tabresult[4]){

    /* Affichage des formes complexes en Cartesienne et Polaire pour l'operation des nombres complexes */
    printf("\nResultat pour la forme Cartesienne \t=\t %f + %f i\n",tabresult[0],tabresult[1]);
    printf("Resultat pour la forme Polaire \t=\t [%f ; %f]\n\n",tabresult[2],tabresult[3]);
}
/*-------------------------------------------------------------------------*/
