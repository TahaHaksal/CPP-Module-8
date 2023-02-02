#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <string>
# include <vector>
# include <algorithm>

class Span
{
	public:
		// Constructors
		Span(unsigned int N);
		Span(const Span &copy);

		// Destructor
		~Span();

		// Operators
		Span & operator=(const Span &assign);

		// Getters
		int					getI() const;
		int					getN() const;
		std::vector<int>	getArr() const;

		// Member func
		void	addNumber(int x);
		int		shortestSpan();
		int		longestSpan();
	protected:
		bool				_sorted;
	private:
		std::vector<int>	_arr;
		int					_i;
		int					_n;
};

#endif
