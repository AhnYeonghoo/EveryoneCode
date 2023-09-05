#pragma once
#include <iostream>

class Animal
{
private:
	int food_;
	int weight_;
	
public:
	void setAnimal(int food, int weight)
	{
		food_ = food;
		weight_ = weight;
	}

	void increaseFood(int inc)
	{
		food_ += inc;
		weight_ += (inc / 3);
	}

	void viewStat()
	{
		std::cout << "�� ������ food : " << food_ << std::endl;
		std::cout << "�� ������ weight : " << weight_ << std::endl;
	}
};
