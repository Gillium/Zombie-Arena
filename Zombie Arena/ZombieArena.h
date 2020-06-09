#pragma once
//#include <SFML/Graphics.hpp> //ADDED...WAS NOT INSTRUCTED IN BOOK
#include "Zombie.h"

using namespace sf;

int createBackground(VertexArray& rVA, IntRect arena);
Zombie* createHorde(int numZombies, IntRect arena);