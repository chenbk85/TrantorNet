#ifndef STRING_TRAITS_H_
#define STRING_TRAITS_H_
#include <string>

template <class T>
std::string StringTraits(T content)
{
	return std::string();
}

template <>
std::string StringTraits(std::string content)
{
	return content;
}

template <>
std::string StringTraits(bool content)
{
	if(content)
	{
		return "true";
	}
	else
	{
		return "false";
	}
}

#endif