#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

template <typename T>
int easyfind(T var, int second)
{
    typename T::iterator iter;
    for (iter = var.begin(); iter != var.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
    return (second);
}

#endif