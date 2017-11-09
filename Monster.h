#pragma once

#define MONSTER_H
#include "spaceIdentity.h"
#include <iostream>
#include <conio.h>


using namespace std;

class Monster: public spaceIdentity{


	Monster(int posX,int Y,int weight,int dx,int dy,string character,string name);

	~Monster();

	
	
	void imprimir();
	void mover()


};
