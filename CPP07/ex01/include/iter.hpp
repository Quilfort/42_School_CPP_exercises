#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *input, size_t len, void (*function)(T&))
{
    for (size_t i = 0; i < len; i++)
        (*function)(input[i]);
}

template <typename T>
void callElement(T &element)
{
    std::cout << "Element: ";
    std::cout << element << std::endl;
}
#endif