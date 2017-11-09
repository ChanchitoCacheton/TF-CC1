#include "World.h"

using namespace std;

World::World(){

	for (int i = 0; i < fil; ++i){
				
		space[i]= new char[col];
}

World::~World(){

	for(int i = 0; i < sizeY; ++i) {
    			delete [] space[i];
			}
			delete [] space;



}


void World::agregaNave(){}

bool World::colisionNE(spaceShip a,Monster b){

	int p= a.getY();
	int q= a.getH();
	int s= b.getY();

	if((p+q)!=s)
		return false;
	
	return true;
}
