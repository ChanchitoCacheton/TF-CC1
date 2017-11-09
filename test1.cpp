#pragma once


#include <iostream>

#include <conio.h>

#define ESPACIOS 50;

using namespace std;

char Xflow[ESPACIOS]="";
class Mundo{

	protected:
		int fil,col;

		char **space=new char*[fil];

		Mundo(){
			for (int i = 0; i < fil; ++i){
				
					space[i]= new char[col];	
			}
		}
		~Mundo(){

			for(int i = 0; i < sizeY; ++i) {
    			delete [] space[i];
			}
			delete [] space;

		}
		

};

class Nave:public Mundo{

	public:
		int x,y,w,h;
		char keybind;
		int r,l;

		//estructura
		char matrizNave[4][7]={{' ',' ','!',' ','!',' ',' '},
						   	   {' ',' ','^','T','^',' ',' '},
						   	   {' ','{','_','@','_','}',' '},
						   	   {'<','~','H','w','H','~','>'}};



	Nave();

	void mover(){};
	void imprimir(){ do{puts(matrizNave);}while(true); };

};
int main(){

	Nave a;

	while(Mundo==true){

		a.mover();
		a.imprimir();
	}
	return 0;
}