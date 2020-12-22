#include <iostream>
using namespace std;

/* classe mère */
class Point{
  /* protected pour la relation classe mère-classe fille */
protected:
  char nom;
  float x;
  float y;
public:
  /* constructeur par défaut */
  Point();

  /* constructeur surchargé */
  Point(char,float,float);

  /* déclaration de méthodes */
  void deplace(float dx , float dy);
  void affiche();
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
  Pixel(char,float,float,string);

  /* destructeur */
  /* ~Pixel(); */
  /* méthode affichage des données pour la classe fille */
  /* il est autorisé d'avoir une méthode identique pour chaque classe */
  /* même si la méthode void affiche() est identique de celle qui est dans la classe Point */
  /* elles sont différentes !!! */
  void affiche();
};


/* ---------------------Programme principal ------------------- */
int main(void){


  /* instanciation de la classe pour le point A*/
  /* valeur à afficher, non obligation de saisir  */
  Point A('A',6.4,3.1);
  A.affiche();

  cout<<"Creation d'un deuxieme point : "<<endl;

  /* instanciation de la classe pour le point B*/
  Point B;

  /* déclaration de variables à virgule flottante pour mettre en argument */
  /* de la méthode deplace(); */
  float abs,ord;
  B.affiche();

  /* deplacement du point avec l'appel de méthodes */
  cout<<"deplacement du point B avec des valeurs passees en argument"<<endl;
  B.deplace(abs,ord);
  B.affiche();

  /* appel de méthode pour les pixels */
  cout<<"creation des pixels (points colores) :"<<endl;

  /* instantiation de la classe fille pour le point C sans saisie */
  Pixel C('C',3.3,4.4,"bleu");
  /* Point C a pour coordonnées 3.3 et 4.4, il est de couleur bleu */
  C.affiche();

  /* instanciation de la classe fille pour le point D avec saisie */
  Pixel D;
  C.affiche();
  D.affiche();

  return 0;
}

/* définition du constructeur par défaut */
Point::Point(){
  cout<<"entrez le nom du point :";
  cin>> nom;
  cout<<"entrez l'abscisse du point :";
  cin>> x;
  cout<<"entrez l'ordonnee du point :";
  cin>> y;
}



Point::Point(char n,float a,float b){
  nom = n;
  x= a;
  y=b;

}

/* constructeur par défaut  */
Pixel::Pixel():Point(){
  cout<<"entrez la couleur du pixel : ";
  cin>>couleur;
}

/* constructeur surchargé, liste d'initialisation, classe fille */
/* couleur(color) est identique que couleur = color */
Pixel::Pixel(char n,float a,float b,string color):Point(n,a,b),couleur(color){

}

/* méthode qui se trouve dans le programme principal : A.affiche(); pour les points */
void Point::affiche(){
  cout<<"Le point "<<nom<<" a pour coordonnees : ["<< x <<" ,"<< y <<"]"<<endl<<endl;
}

/* déplacer en saississant des valeurs, dans le programme principal, A.deplace(dx,dy) */
void Point::deplace(float dx,float dy){
  cout<<"quel deplacement pour l'abscisse : ";
  cin>> dx;
  x=x+dx;
  cout<<"quel deplacement pour l'ordonnee : ";
  cin>> dy;
  y=y+dy;

}

/* méthode affichage P.affiche de la classe fille Pixel avec les variables x,y et nom de la classe mère */
/* couleur est une variable de la classe fille */
void Pixel::affiche(){
  cout<<"Le point "<< nom <<" a pour coordonnees : ["<< x <<" ,"<< y <<"]. Il est de couleur "<< couleur <<" "<<endl<<endl;
}
