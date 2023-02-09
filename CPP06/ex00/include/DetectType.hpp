#ifndef DETECT_HPP
# define DETECT_HPP

#include <iostream>

class DetectType
{
    public:
    	DetectType(std::string &input);
		DetectType(const DetectType &old_obj);
		DetectType &operator=(const DetectType &old_obj);
		~DetectType();

		//void parsetype();
		void castChar();
		void castInt();
		void printConvert();

    private:
		std::string input;
		char		c;
		int			i;
		float		flo;
		double		doub;
};

#endif  