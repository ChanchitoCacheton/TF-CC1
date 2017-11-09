#pragma once

#define SPACESHIP_H


#include <iostream>
#include <string>
#include <conio.h>
#include "spaceIdentity.h"




using namespace std;

class spaceShip: public spaceIdentity{
	
	public:

		int x,y,dx,h,w;

		char Mship1[4][7]={{' ',' ','!',' ','!',' ',' '},
						   {' ',' ','^','T','^',' ',' '},
						   {' ','{','_','@','_','}',' '},
						   {'<','~','H','w','H','~','>'}};

			

		spaceShip();
		~spaceShip();



		void mover();
		void imprimir();
		



};