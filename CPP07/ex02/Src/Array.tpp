#include "../include/Array.hpp"

template<typename T>
Array<T>::Array()
{
    this->array = new T[0];
    this->len = 0;
    //std::cout << "Default constructor is called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int size)
{
    T*  init = new T();
    
    this->len = size;
    this->array = new T[len];
    for (unsigned int i = 0; i < len; i++)
		array[i] = *init;
	delete init;
    //std::cout << "Default constructor is called" << std::endl;
}

template<typename T>
Array<T>::Array(const Array &obj)
{
    //std::cout << "Copy constructor is called" << std::endl;
    this->array = NULL;
    *this = obj;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T> &obj)
{
    //std::cout << "Copy assignment operator is called" << std::endl;
    if (array != NULL)
        delete[] array;
    len = obj.size();
    array = new T[len];
    for (unsigned int i = 0; i < len; i++)
		array[i] = obj.array[i];
    return (*this);
}

template<typename T>
Array<T>::~Array()
{
    delete[] this->array;
    //std::cout << "Destructor is called" << std::endl;
}

template<typename T>
T& Array<T>::operator[] (size_t i) const
{
    if (i >= this->len)
		throw(IndexOutOfBoundsException());
    return(this->array[i]);
}

template<typename T>
size_t Array<T>::size(void) const
{
    return (this->len);
}

template<typename T>
void Array<T>::print(std::ostream& out) const
{
    unsigned int i;
    if (len == 0)
        return;
    for (i = 0; i < len - 1; i++)
		//out << array[i] << " ";
        out << array[i] << " | ";
	if (i == len - 1)
		out << array[i];
}

template<typename T>
std::ostream& operator<< (std::ostream &out, const Array<T> &a)
{
     a.print(out);
     return (out);
}

//const char *Array<T>::IndexException::what(void) const throw()
//{
//	return ("INDEX ERROR");
//};
