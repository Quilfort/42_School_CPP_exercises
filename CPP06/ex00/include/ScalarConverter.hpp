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

class ScalarConverter
{
    public:

		static ScalarConverter& GetInstance(std::string input)
		{
			static ScalarConverter instance(input);
			return instance;
		}
		static void	convert();
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

    private:
		ScalarConverter(std::string input);
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &old_obj);
		ScalarConverter &operator=(const ScalarConverter &old_obj);

		static std::string 	input;
		static int			InputType;
		static char			c;
		static long int		i;
		static int			print_i;
		static float		flo;
		static double		doub;
};

#endif  