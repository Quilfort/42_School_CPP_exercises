#ifndef SCALER_HPP
# define SCALER_HPP

#include <iostream>
#include <string>
#include <iomanip>

enum InputType
{
	CHAR,
	INT,
	DOUBLE,
	FLOAT,
	ERROR
};

class ScalarConverter
{
    public:
		static void	convert(std::string string);
	
    private:
		static std::string 	input;
		static int			InputType;
		static char			c;
		static long int		i;
		static int			print_i;
		static float		flo;
		static double		doub;
		
		static int	parseType();
		static void	printConvert();

		// Casting
		static void 	castChar();
		static void 	castInt();
		static void 	castDouble();
		static void 	castFloat();

		// Printing
		static void 	printChar();
		static void 	printInt();
		static void 	printDouble();
		static void 	printFloat();	
		
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &old_obj);
		ScalarConverter &operator=(const ScalarConverter &old_obj);
};
#endif  