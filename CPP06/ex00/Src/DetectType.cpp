#include "DetectType.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cctype>
#include <cstdlib>


DetectType::DetectType(std::string &input) : input(input)
{
        //std::cout << "Default constructor called" << std::endl;
}

DetectType::DetectType(const DetectType &old_obj)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
}

DetectType& DetectType::operator=(const DetectType &old_obj)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    (void) old_obj;
    return (*this);
}

DetectType::~DetectType()
{
    //std::cout << "Destructor called" << std::endl;
}

//void	*DetectType::parsetype(std::string input)
//{
//    this->input = input;
//}

void	DetectType::castChar()
{   
    this->c = static_cast<char>(this->input[0]);
	this->i = static_cast<long int>(c);
	this->flo = static_cast<float>(c);
    this->doub = static_cast<double>(c);
}

void	DetectType::castInt()
{   
   
	this->i = static_cast<long int>(atol(this->input.c_str()));
    this->c = static_cast<char>(i);
	this->flo = static_cast<float>(i);
    this->doub = static_cast<double>(i);
}

void	DetectType::printConvert()
{
    std::cout << "char: " << this->c << std::endl;
    std::cout << "int: " << this->i << std::endl;
    std::cout << "float: " << this->flo << std::endl;
    std::cout << "double: " << this->doub << std::endl;

}


