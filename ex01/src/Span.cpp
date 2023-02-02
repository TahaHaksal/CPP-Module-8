#include "../headers/Span.hpp"

// Constructors
Span::Span(unsigned int N) : _n(N)
{
	_sorted = false;
	_i = 0;
	std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
}

Span::Span(const Span &copy)
{
	_n = copy.getN();
	_i = copy.getI();
	_arr = copy.getArr();
	_sorted = copy._sorted;
	std::cout << "\e[0;33mCopy Constructor called of Span\e[0m" << std::endl;
}


// Destructor
Span::~Span()
{
	std::cout << "\e[0;31mDestructor called of Span\e[0m" << std::endl;
}


// Operators
Span & Span::operator=(const Span &assign)
{
	_sorted = assign._sorted;
	_n = assign.getN();
	_i = assign.getI();
	_arr = assign.getArr();
	return *this;
}

// Getters
int					Span::getI() const{return _i;}
int					Span::getN() const{return _n;}
std::vector<int>	Span::getArr()const {return _arr;}

// Member func
void	Span::addNumber(int x){
	if (_i >= _n)
		throw std::exception();
	_sorted = false;
	_i++;
	_arr.push_back(x);
}

int		Span::shortestSpan(){
	if (!_sorted)
		std::sort(_arr.begin(), _arr.end());
	_sorted = true;
	int	x = _arr[0];
	for (int j = 0; j + 1 < _i; j++){
		if (abs(_arr[j] - _arr[j + 1]) < x)
			x = abs(_arr[j] - _arr[j + 1]);
	}
	return (x);
}

int		Span::longestSpan(){
	if (!_sorted)
		std::sort(_arr.begin(), _arr.end());
	_sorted = true;
	return _arr[_arr.size() - 1] - _arr[0];
}
