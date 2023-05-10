#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <limits.h> 
# include <fstream>
# include <sstream>

class RPN
{
    public:
        RPN(std::string input);
        RPN(const RPN &old_obj); 
        RPN &operator=(const RPN &old_obj);
        ~RPN();

        bool isOperater(char check);
        bool isNumber(char check);
        int convertNum(char check);
        int calculation(int a, int b, char op);

        std::string _input;

    private:

















};

#endif