#pragma once

#define WORLD_H
#include <iostream>
#include <conio.h>
#include <string>


#include "spaceIdentity.h"
#include "spaceShip.h"
#include "Monster.h"
#include "manejaMonster.h"

using namespace std;

class World{



	protected:
		int fil,col;

		char **space=new char*[fil];

		Mundo();
		~Mundo();



		void agregaNave();

		bool colisionNE(spaceShip a,Monster b);
		



};