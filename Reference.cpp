#include <iostream>

int changeVal(int& p)
{
	p = 3;
	return 0;
}

int& function(int& a);
int function();

int mainReference()
{
	int a = 3;
	int& anotherA = a; // ���۷���(��Ī)
	
	anotherA = 5;
	std::cout << "a: " << a << std::endl;
	std::cout << "anotherA: " << anotherA << std::endl;

	int number = 5;
	
	std::cout << number << std::endl;
	changeVal(number);
	std::cout << "After changeVal() Call" << std::endl;
	std::cout << number << std::endl;

	int x;
	int& y = x; // y�� x�� ���۷���
	int& z = y; // z�� y�� ���۷��� y�� x�� ���۷���, �� z�� x�� ���۷����� ��
	
	x = 1;
	std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;

	y = 2;
	std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
	
	z = 3;
	std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;

	std::cout << "�迭���� ���۷���" << std::endl;
	// �迭���� ���۷����� �ҹ�������, ������ �ϴ�.
	int arr[3]{ 1, 2, 3 };
	int(&ref)[3] = arr;
	ref[0] = 2;
	ref[1] = 3;
	ref[2] = 1;
	std::cout << arr[0] << arr[1] << arr[2] << std::endl;
	 
	std::cout << "���۷����� �����ϴ� �Լ�" << std::endl;

	int b = 2;
	int c = function(b);
	std::cout << c << std::endl;
	const int& c2 = function();
	std::cout << c2 << std::endl;
	return 0; 
}

int& function(int& a)
{
	a = 5;
	return a;
}

int function()
{
	int a = 5;
	return a;
}