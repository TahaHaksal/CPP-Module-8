#include "../headers/easyfind.hpp"
#include <time.h>
#include <cstdlib>
#include <vector>

#define ARR_SIZE 10

int	main(void )
{
	srand(time(NULL));
	std::vector<int>arr2;
	for (int i = 0; i < ARR_SIZE; i++)
		arr2.push_back(rand() % 10);
	int x = rand() % 10;
	try{
		std::vector<int>::iterator it = easy_find(arr2, x);
		std::cout << *it << std::endl;
		std::cout << std::endl;
	}
	catch (cantFind &e){
		std::cout << e.what();
	}
	std::cout << "x = " << x << std::endl;
	for (int i = 0; i < ARR_SIZE; i++)
		std::cout << arr2[i] << std::endl;
}
