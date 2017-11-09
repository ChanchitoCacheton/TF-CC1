#pragma once

#define SPACEIDENTITY_H

#include <iostream>
#include <string>
#include <conio.h>


using namespace std;

class spaceIdentity{
	

	protected:

		int posX,posY;
		int weight,height;
		int dx,dy

		string character;
		string name;

		int n;
	public:
		spaceIdentity();

		int getX();
		int getY();

		int getW();
		int getH();

		void setX();
		void setY();

		void setW();
		void setY();

		virtual void imprimir()=0;
		virtual void mover()=0;

};