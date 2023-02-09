#ifndef DETECT_HPP
# define DETECT_HPP

#include <iostream>

enum InputType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	ERROR
};

class DetectType
{
    public:
    	DetectType(std::string &input);
		DetectType(const DetectType &old_obj);
		DetectType &operator=(const DetectType &old_obj);
		~DetectType();

		void startProgram();
		int parseType();
		void castChar();
		void castInt();
		void castFloat();

		void printConvert();

    private:
		std::string input;
		int			InputType;
		char		c;
		int			i;
		float		flo;
		double		doub;
};

#endif  