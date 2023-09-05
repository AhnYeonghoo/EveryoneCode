#include <iostream>

void print(int x) { std::cout << "Int: " << x << std::endl; }
void print(char x) { std::cout << "Char: " << x << std::endl; }
void print(double x) { std::cout << "Double: " << x << std::endl; }

int main()
{
	int a = 1;
	char b = 'c';
	double c = 3.2f;

	print(a);
	print(b);
	print(c);
	return 0;
}