#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Prototype avec les réels dans la structure*/
struct complexe{
    float a,b,mod,arg;
};
/*==============================================================================================*/
/*Prototypes*/
struct complexe choixFormeSaisie();// Selection de la forme Cartesienne ou Polaire
struct complexe saisieCart();// Peermet de saisir le nomdre cartesien et de le convertir en polaire grace au convCartPol
struct complexe saisiePol();// Peermet de saisir le nomdre polaire et de le convertir en cartesienne grace au convPolCart
struct complexe convCartPol(struct complexe); // Conversion de la forme Cartesienne vers la forme Polaire
struct complexe convPolCart(struct complexe); // Conversion de la forme Polaire vers la forme Cartesienne
struct complexe operation(struct complexe nbr1,struct complexe nbr2);// Structure oermettant de calculer les nombres complexes grace a des opérations
struct complexe affichage();// Structure permettant d'afficher la forme polaire et cartesienne du 1er nombre,2eme nombre et du resultat


/*-------------------------------------PROGRAMME PRINCIPALE-------------------------------------*/
int main(void){
    /*Declarations des variables*/
    struct complexe nbre1,nbre2,nbreResu;

    /*Appel de fonction pour choisir la forme selectionner et la saisie du nombre 1*/
    printf("Premiere saisie complexe:\n");
    nbre1=choixFormeSaisie(nbre1);
    affichage(nbre1);

    /*Appel de fonction pour choisir la forme selectionner et la saisie du nombre 2*/
    printf("\nSeconde saisie complexe:\n");
    nbre2=choixFormeSaisie(nbre2);
    affichage(nbre2);

    /*Appel de la foncntion afin de calculer les nombres complexes avec une opération*/
    printf("Operation:\n");
    nbreResu=operation(nbre1,nbre2);
    affichage(nbreResu);

    return EXIT_SUCCESS;
}
/*----------------------------------------------------------------------------------------------*/

/* Fonction choixFormeSaisie */
struct complexe choixFormeSaisie(){
    struct complexe choixComp;
    char choixForm;

    /*boucle permettant de choisir entre la forme cartesienne et polaire*/
    do{
        printf("\nVeuiller choisir votre forme complexe: Cartesienne (c) ou Polaire (p) ?");
        scanf("%c",&choixForm);

        if ((choixForm=='c')||(choixForm=='C')){
            choixComp=saisieCart(choixComp);
        }
        if ((choixForm=='p')||(choixForm=='P')){
            choixComp=saisiePol(choixComp);
        }
    }
    while ((choixForm!='c')&&(choixForm!='C')&&(choixForm!='p')&&(choixForm!='P'));

    return choixComp;
}
/*----------------------------------------------------------------------------------------------*/

/* Fonction saisieCart */
struct complexe saisieCart(){
    struct complexe compCart;

    /*Saisie de la forme cartesienne*/
    printf("\nLa forme cartesienne : Z=a+ib\n");
    printf("Veuiller entrez le nombre reel (a): ");
    scanf("%f",&compCart.a);
    printf("Veuiller entrez le nombre imaginaire (b): ");
    scanf("%f",&compCart.b);

    /*Appel de fonction afin de convertir le nombre complexe Cartesienne vers Polaire*/
    compCart=convCartPol(compCart);

    return compCart;
}
/*----------------------------------------------------------------------------------------------*/

/* Fonction saisiePol */
struct complexe saisiePol(){
    struct complexe compPol;

    /*Saisie de la forme polaire*/
    printf("\nLa forme polaire : [module ; argument]\n");
    printf("Veuiller entrez le module: ");
    scanf("%f",&compPol.mod);
    printf("Veuiller entrez l'argument: ");
    scanf("%f",&compPol.arg);

    /*Appel de fonction afin de convertir le nombre complexe Polaire vers Cartesienne */
    compPol=convPolCart(compPol);

    return compPol;
}
/*----------------------------------------------------------------------------------------------*/

/* Fonction convCartPol */
struct complexe convCartPol(struct complexe convCP){

    /*Conversion forme Cartesienne -> forme Polaire*/
    convCP.mod=sqrt(pow(convCP.a,2)+pow(convCP.b,2));
    convCP.arg=atan(convCP.b/convCP.a);

    return convCP;
}
/*----------------------------------------------------------------------------------------------*/

/* Fonction convPolCart */
struct complexe convPolCart(struct complexe convPC){

    /*Conversion forme Polaire -> forme Cartesienne*/
    convPC.a=convPC.mod*cos(M_PI*convPC.arg/180);
    convPC.b=convPC.mod*sin(M_PI*convPC.arg/180);

    return convPC;
}
/*----------------------------------------------------------------------------------------------*/

/* Fonction operation */
struct complexe operation(struct complexe nb1,struct complexe nb2){
    struct complexe nbresu;
    char oper,vide;

    /*Selection de l'opérande*/
    printf("Choisissez votre operation arithmetique:(+),(-),(*),(/): ");
    scanf("%c%c",&vide,&oper);
    printf("RESULTAT:");

    /*Permet de calculer les nombres complexes grace a l'operande(voir ci-dessus)*/
    switch(oper){
    case '+':
        nbresu.a=nb1.a+nb2.a;
        nbresu.b=nb1.b+nb2.b;
        nbresu.mod=sqrt(pow(nbresu.a,2)+pow(nbresu.b,2));
        nbresu.arg=atan(nbresu.b/nbresu.a);
        break;
    case '-':
        nbresu.a=nb1.a-nb2.a;
        nbresu.b=nb1.b-nb2.b;
        nbresu.mod=sqrt(pow(nbresu.a,2)-pow(nbresu.b,2));
        nbresu.arg=atan(nbresu.b/nbresu.a);
        break;
    case '*':
        nbresu.mod=nb1.mod*nb2.mod;
        nbresu.arg=nb1.arg*nb2.arg;
        nbresu.a=nbresu.mod*cos(M_PI*nbresu.arg/180);
        nbresu.b=nbresu.mod*sin(M_PI*nbresu.arg/180);
        break;
    case '/':
        nbresu.mod=nb1.mod/nb2.mod;
        nbresu.arg=nb1.mod/nb2.arg;
        nbresu.a=nbresu.mod*cos(M_PI*nbresu.arg/180);
        nbresu.b=nbresu.mod*sin(M_PI*nbresu.arg/180);
        break;
    }
    return nbresu;
}
/*----------------------------------------------------------------------------------------------*/

/* Fonction affichage */
struct complexe affichage(){
    struct complexe affComp;

    /* Affichage des formes complexes en Cartesienne et Polaire pour le 1er nombre complexes,2eme nombre et le resultat*/
    printf("\nLa forme Cartesienne est\t=\t %f + %f i\n",affComp.a,affComp.b);
    printf("La forme Polaire est \t=\t [%f ; %f]\n\n",affComp.mod,affComp.arg);

}
