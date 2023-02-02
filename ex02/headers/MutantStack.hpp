#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		// Constructors
		MutantStack() {};
		MutantStack(const MutantStack &copy) : std::stack<T>(copy) {};

		// Destructor
		~MutantStack() {};

		// Operators
		MutantStack & operator=(const MutantStack &assign){ std::stack<T>::c(assign); return *this;};

		// Member func
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(){return std::stack<T>::c.begin();}
		iterator	end(){return std::stack<T>::c.end();}
	private:

};

#endif
