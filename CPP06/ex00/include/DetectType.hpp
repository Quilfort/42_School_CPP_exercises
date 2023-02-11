#ifndef DETECT_HPP
# define DETECT_HPP

#include <iostream>

enum InputType
{
	CHAR,
	INT,
	DOUBLE,
	FLOAT,
	ERROR
};

class DetectType
{
    public:
    	DetectType(std::string input);
		DetectType(const DetectType &old_obj);
		DetectType &operator=(const DetectType &old_obj);
		~DetectType();

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