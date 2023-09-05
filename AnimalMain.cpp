#include "Animal.hpp"

int mainAnimalMain()
{
	Animal* list[10];
	int animalNum = 0;

	for (;;)
	{
		std::cout << "1. ���� �߰��ϱ�" << std::endl;
		std::cout << "2. ���" << std::endl;
		std::cout << "3. ���� ����" << std::endl;

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
			std::cout << "������ ���? : ";
			std::cin >> playWith;

			if (playWith < animalNum) play(list[playWith]);
			break;

		case 3:
			std::cout << "������ ����? : ";
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