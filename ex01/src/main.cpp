#include "../headers/Span.hpp"
#include <time.h>
#include <cstdlib>
#include <vector>

#define ARR_SIZE 10

int	main(void )
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
