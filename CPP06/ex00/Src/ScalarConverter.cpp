#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
        //std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &old_obj)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &old_obj)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    InputType = old_obj.InputType;
    c = old_obj.c;
    i = old_obj.i;
    print_i = old_obj.print_i;
    flo = old_obj.flo;
    doub = old_obj.doub;
    input = old_obj.input;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    //std::cout << "Destructor called" << std::endl;
}

void ScalarConverter::convert(std::string string)
{
    input = string;
    InputType = parseType();

    if (InputType == CHAR)
        castChar();
    else if (InputType == INT)
        castInt();
    else if (InputType == DOUBLE)
        castDouble();
    else if (InputType == FLOAT)
        castFloat();
    if (InputType != ERROR)
        printConvert();
    else
         std::cout << "ERROR: INCORRECT INPUT || TRY AGAIN" << std::endl;
}

int ScalarConverter::parseType()
{
    char*	end;
    
    if (input.length() == 1 && (input.find_first_not_of("0123456789") != std::string::npos))
        return (CHAR);
    std::strtol(input.c_str(), &end, 10);
    if (*end == '\0')
        return (INT);
    std::strtof(input.c_str(), &end);
    if (*end == '\0')
        return (DOUBLE);
    std::strtof(input.c_str(), &end);
    if ((*end == 'f' && end[input.length() + 1] == '\0') || \
            input.compare("-inff") == 0 || input.compare("inff") == 0 || input.compare("nanf") == 0)
        return (FLOAT);
    return (ERROR);
}

void	ScalarConverter::printConvert()
{
    printChar();
    printInt();
    printFloat();
    printDouble();
}

// CASTING
void	ScalarConverter::castChar()
{   
    c = static_cast<char>(input[0]);
	i = static_cast<long int>(c);
	flo = static_cast<float>(c);
    doub = static_cast<double>(c);
}

void	ScalarConverter::castInt()
{   
	i = static_cast<long int>(atol(input.c_str()));
    c = static_cast<char>(i);
	flo = static_cast<float>(i);
    doub = static_cast<double>(i);
}

void	ScalarConverter::castDouble()
{   
	doub = static_cast<double>(atof(input.c_str()));
    c = static_cast<char>(doub);
    i = static_cast<long int>(doub);
	flo = static_cast<float>(doub);
}

void	ScalarConverter::castFloat()
{   
	char*	end;
    
    flo = static_cast<float>(strtof(input.c_str(), &end));
    i = static_cast<long int>(flo);
    c = static_cast<char>(flo);
    doub = static_cast<double>(flo);
}

//PRINTING
void	ScalarConverter::printChar()
{
    std::cout << "char: ";
    if (isprint(c) && (i <= 127 && i >= 0))
        std::cout << c << std::endl;
    else if (isascii(c) && (i <= 127 && i >= 0))
        std::cout << "Non displayable" << std::endl;
    else
		std::cout << "impossible" << std::endl;
}

void	ScalarConverter::printInt()
{
    std::cout << "int: ";
    if (i <= INT_MAX && i >= INT_MIN)
    {
        print_i = static_cast<int>(i);
		std::cout<< i << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

void	ScalarConverter::printFloat()
{
    std::cout << std::fixed;
	std::cout << std::setprecision(1);
	std::cout << "float: ";
    std::cout << flo << "f" << std::endl;
}

void	ScalarConverter::printDouble()
{
    std::cout << std::fixed;
	std::cout << std::setprecision(1);
	std::cout << "double: ";
    std::cout << doub << std::endl;
}