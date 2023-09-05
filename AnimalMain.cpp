#include "Animal.hpp"

int mainAnimalMain()
{
	Animal* list[10];
	int animalNum = 0;

	for (;;)
	{
		std::cout << "1. 동물 추가하기" << std::endl;
		std::cout << "2. 놀기" << std::endl;
		std::cout << "3. 상태 보기" << std::endl;

		int input;
		std::cin >> input;

		switch (input)
		{
			int playWith;
		case 1:
			list[animalNum] = new Animal;
			createAnimal(list[animalNum]);
			animalNum++;
			break;

		case 2:
			std::cout << "누구랑 놀게? : ";
			std::cin >> playWith;

			if (playWith < animalNum) play(list[playWith]);
			break;

		case 3:
			std::cout << "누구껄 보게? : ";
			std::cin >> playWith;
			if (playWith < animalNum) showStat(list[playWith]);
			break;
		}

		for (int i = 0; i != animalNum; i++)
		{
			oneDayPass(list[i]);
		}
	}

	for (int i = 0; i != animalNum; i++)
	{
		delete list[i];
	}
	return 0;
}