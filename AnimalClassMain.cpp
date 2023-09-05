#include "AnimalClass.hpp"

int mainAnimalClassMain()
{
	Animal animal;
	animal.setAnimal(100, 50);
	animal.increaseFood(30);
	
	animal.viewStat();
	return 0;
}