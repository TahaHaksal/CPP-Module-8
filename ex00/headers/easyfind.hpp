#pragma once
#include <iostream>
#include <exception>
#include <algorithm>
#include <iterator>

class cantFind : public std::exception
{
	public:
		const char	*what(){
			return ("Couldn't find specified integer in the array\n");
		}
};

template <typename T>
typename T::iterator	easy_find(T array, int needle)
{
	typename T::iterator it = std::find(array.begin(), array.end(), needle);
	if (it < array.end())
		return (it);
	throw cantFind();
}
