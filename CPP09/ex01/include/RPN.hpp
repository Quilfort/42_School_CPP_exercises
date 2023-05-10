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

        std::string _input;

    private:

















};

#endif