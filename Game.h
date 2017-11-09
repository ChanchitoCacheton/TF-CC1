#pragma once

#define GAME_H

#include <iostream>
#include <conio.h>
#include <string>

#include "spaceIdentity.h"
#include "spaceShip.h"
#include "Monster.h"
#include "manejaMonster.h"
#include "World.h"

using namespace std;

class Game{
	
	public:

		int score;
		int vida;

		char corazones;

		Game();
		~Game();


		void Menu();

		void Scene();

		void gameOver();




};