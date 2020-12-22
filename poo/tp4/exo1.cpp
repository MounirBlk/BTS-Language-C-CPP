#include <iostream>
using namespace std;
/*-------------------- TP 4 --------------------*/
/* classe mère */
class Point{
  
  /* protected pour la relation classe mère-classe fille */
protected:
  string nom;
  float x;
  float y;
public:
  /* constructeur par défaut */
  Point();

  /* constructeur surchargé */
  Point(string moumou,float mimi,float mama);

  /* déclaration de méthodes */
  void deplace(float dx , float dy);
  void affiche();
  /* getteur */
  float getx();
  float gety();
  
};


/* classe fille */
class Pixel:public Point{
private:
  string couleur;
public :
  /* constructeur par défaut */
  Pixel();

  /* constructeur surchargé 4 paramètres (char,float,float, string) qui correspond à 4 variables  */
  /* 3 variables issues de la classe mère et le string est la variable string couleur de la classe Pixel */
  Pixel(string un,float deux,float trois,string soleil);

  /* destructeur */
  /* ~Pixel(); */
  
  /* méthode affichage des données pour la classe fille */
  /* il est autorisé d'avoir une méthode identique pour chaque classe , elle sont differentes*/

  void affiche();
};



/* ---------------------Programme principal ------------------- */
int main(void){


  /* instanciation de la classe pour le point A*/
  /* valeur à afficher, non obligation de saisir  */

  
  Point A("Pt",6.4,3.1);
  cout<<"\t Les coordonnées du point ";
  A.affiche();
  cout<<"\t Creation du 2eme  point : "<<endl;

  
  /* instanciation de la classe pour le point B*/
  Point B;

  
  /* déclaration de variables à virgule flottante pour mettre en argument */
  /* de la méthode deplace(); */
  float abs,ord;
  cout<<"\t Les coordonnées du point ";
  B.affiche();

  
  /* deplacement du point avec l'appel de méthodes */
  cout<<"\n\n deplacement d'un second point  avec des valeurs passees en argument "<<endl;
  B.deplace(abs,ord);
  cout<<"\t Les coordonnées du point ";
  B.affiche();

  
  /* appel de méthode pour les pixels */
  cout<<"\n\n creation des pixels (points colores) :"<<endl;

  
  /* instantiation de la classe fille pour le point C sans saisie */
  Pixel C("C",3.3,4.4,"bleu");

  
  /* instanciation de la classe fille pour le point D avec saisie */
  Pixel D;

  
  /* Point C a pour coordonnées 3.3 et 4.4, il est de couleur bleu */
  C.affiche();
  D.affiche();

  
  /* saut de 2 lignes */
  cout<<endl<<endl;

  
  /* Point alloué de façon dynamique  */
  cout<<"\n Creation du point alloue dynamiquement"<<endl;
  Point *Pt = new Point;
  cout<<"\t Les coordonnées du point ";
  Pt -> affiche();

  /* libération mémoire avec delete*/
  cout<<"\n\n\t La memoire a ete liberee "<<endl;
  delete Pt;


  /* Pixel alloué de façon dynamique */
  cout<<"\n\n Creation d'un pixel alloue dynamiquement"<<endl;
  Pixel *Px = new Pixel;
  Px -> affiche();

  /* libertion mémoire */
  cout<<"\n\t La memoire a ete liberee "<<endl;
  delete Px;

  /* Tableau de façon dynamique */
  cout<<"\n\n Creation d'un tableau  alloue dynamiquement"<<endl;

  
  Point *Pts[4];
  Pts[0]= new Point();

  
  /* déclaration de variables, variable en underscore = paramètre */
  int i;
  float largeur,longueur,_largeur,_longueur;
  string nom;

  
  /* saisie de données */
  cout<<"\t Entrez la longueur : ";
  cin>> longueur; 
  cout<<"\t Entrez la largeur : ";
  cin>> largeur;

  /* saut de lignes */
  cout<<endl;

  
  /* affectation des données saisies (abscisse,ordonnées,largeur,longueur) par l'utilisateur */
  for(i=1;i<4;i++){
    if(i==1){
      _longueur = Pts[0] -> getx() + longueur;
      _largeur = Pts[0] -> gety();
    }
    if(i==2){
      _longueur = Pts[0] -> getx(); 
      _largeur = Pts[0] -> gety() + largeur;
    }
    if(i==3){
      _longueur = Pts[0] -> getx() + longueur;
      _largeur = Pts[0] -> gety() + largeur;
    }
    
     Pts[i] = new Point(nom,_longueur,_largeur);
  }
  
 
  /* affichage de données */ 
  for(i=0;i<4;i++){
    cout<<"\t Pts["<<i<<"]=";
    Pts[i] -> affiche();
  }

  /*saut de ligne */
  cout<<endl;
  
  return EXIT_SUCCESS;
}


/* --------------------------------- Définitions de méthodes --------------------------- */



/* définition du constructeur par défaut */
Point::Point(){
  cout<<"\t entrez le nom du point :";
  cin>> nom;
  cout<<"\t entrez l'abscisse du point :";
  cin>> x;
  cout<<"\t entrez l'ordonnee du point :";
  cin>> y;
}



Point::Point(string n,float a,float b){
  nom = n;
  x= a;
  y=b;

}

/* constructeur par défaut  */
Pixel::Pixel():Point(){
  cout<<"\t entrez la couleur du pixel : ";
  cin>>couleur;
}

/* constructeur surchargé, liste d'initialisation, classe fille */
/* couleur(color) est identique que couleur = color */
Pixel::Pixel(string n,float a,float b,string color):Point(n,a,b),couleur(color){

}

/* méthode qui se trouve dans le programme principal : A.affiche(); pour les points */
void Point::affiche(){
  cout<<""<<nom<<"["<< x <<" ,"<< y <<"] ";
}

/* déplacer en saississant des valeurs, dans le programme principal, A.deplace(dx,dy) */
void Point::deplace(float dx,float dy){
  cout<<"\t quel deplacement pour l'abscisse : ";
  cin>> dx;
  x=x+dx;
  cout<<"\t quel deplacement pour l'ordonnee : ";
  cin>> dy;
  y=y+dy;

}

/* méthode affichage P.affiche de la classe fille Pixel avec les variables x,y et nom de la classe mère */
/* couleur est une variable de la classe fille */
void Pixel::affiche(){
  cout<<"\t 1 pixel "<< nom <<" de couleur "<< couleur <<" et de coordonnees : ["<< x <<" ,"<< y <<"].\n";
}


/* définition des getteurs */
float Point::getx(){
  return x;  
}


float Point::gety(){
  return y;
}

/* Si tu vois ce message sache que tu es pas intelligent :D */
