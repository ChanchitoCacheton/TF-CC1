#include "Monster.h"
#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

class manejaMonster{

	public:

		int N;

		Monster *arr= new Monster[N];

		manejaMonster();
		~manejaMonster();

		void agregaMonster();
		void eliminaMonster();






};