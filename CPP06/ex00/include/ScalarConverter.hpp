#ifndef SCALER_HPP
# define SCALER_HPP

#include <iostream>

enum InputType
{
	CHAR,
	INT,
	DOUBLE,
	FLOAT,
	ERROR
};

// Static Class, all var static maken
// Write a static class ScalarConverter
class ScalarConverter
{
    public:
    	ScalarConverter(std::string input);
		ScalarConverter(const ScalarConverter &old_obj);
		ScalarConverter &operator=(const ScalarConverter &old_obj);
		~ScalarConverter();

		void	startProgram();
		int		parseType();
		void	printConvert();

		// Casting
		void 	castChar();
		void 	castInt();
		void 	castDouble();
		void 	castFloat();

		// Printing
		void 	printChar();
		void 	printInt();
		void 	printDouble();
		void 	printFloat();
		

    private:
		std::string input;
		int			InputType;
		char		c;
		long int	i;
		int			print_i;
		float		flo;
		double		doub;
};

#endif  