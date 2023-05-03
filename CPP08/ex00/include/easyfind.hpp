#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

template <typename T>
bool easyfind(T var, int search)
{
    typename T::iterator iter;
    iter = std::find(var.begin(), var.end(), search);
    if (iter != var.end())
        return (true);
    else
        return (false);
}

#endif