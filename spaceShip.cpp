#include "spaceIdentity.h"
#include "spaceShip.h"

using namespace std;

spaceShip::Spaceship(){





}


spaceShip::~Spaceship(){





}

void spaceShip::mover(){





}

void spaceShip::imprimir(char m[][7],4,7){
  
  for( int i=0;i<fil;i++){
    for(int j=0;j<col;j++){
      cout<<m[i][j];
    }
    cout<<endl;
  }

}


int spaceShip::getX(){}
int spaceShip::getY(){}

int spaceShip::getW(){}
int spaceShip::getH(){}

void spaceShip::setW(){}
void spaceShip::setH(){}

void spaceShip::setX(){}
void spaceShip::setY(){}
