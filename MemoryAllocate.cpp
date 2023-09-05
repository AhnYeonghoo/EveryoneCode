#include <iostream>

int mainMemoryAllocate()
{
	int* p = new int;
	*p = 10;
	
	std::cout << *p << std::endl;
	
	delete p; // 사용이 끝나면 메모리 반납
	
	int arrSize;
	std::cout << "array size : ";
	std::cin >> arrSize;
	int* list = new int[arrSize];
	
	for (int i = 0; i < arrSize; i++)
	{
		std::cin >> list[i];
	}

	for (int i = 0; i < arrSize; i++)
	{
		std::cout << i << "th element of list : " << list[i] << std::endl;
	}
	delete[] list;
	return 0;
}