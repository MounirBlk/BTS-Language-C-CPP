#include <iostream>
using namespace std;

class Point{
  
private:
  
  int x,y;
  
public:
  
  void initialise(int abs, int ord);
  void deplace(int abs, int ord);
  void affiche();
};

int main(void){
  
  Point A,B,C;
  
  A.initialise(2,7);
  A.affiche();
  A.deplace(5,4);
  A.affiche();
  B = A;
  B.affiche();
  C.initialise(10,15);
  C.deplace(8,4);
  C.affiche();
  
  return EXIT_SUCCESS;
}

void Point::initialise(int abs,int ord){
  x = abs;
  y = ord;
}

void Point::deplace(int dx,int dy){
  x = x+dx;
  y = y+dy;
}

void Point::affiche( ){
  cout<<"Le point est : ["<< x <<","<< y <<"]"<<endl;
}
