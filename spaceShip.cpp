#include "spaceIdentity.h"
#include "spaceShip.h"

using namespace std;

spaceShip::Spaceship(){





}


spaceShip::~Spaceship(){





}

void spaceShip::mover(){

	switch(DIRECTIONS){

		case left : /*dx+x=x*/ break;
		case right: break;


	}



}

void spaceShip::imprimir(char m[][7],4,7){
  
  for( int i=0;i<fil;i++){
    for(int j=0;j<col;j++){
      cout<<m[i][j];
    }
    cout<<endl;
  }

}


int spaceShip::getX(){ return x;}
int spaceShip::getY(){ return y;}

int spaceShip::getW(){ return w;}
int spaceShip::getH(){ return h;}

void spaceShip::setW(){ this->w=w; }
void spaceShip::setH(){ this->h=h; }

void spaceShip::setX(){ posX=x;}
void spaceShip::setY(){ posY=y;}
