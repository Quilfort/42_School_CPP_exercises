#ifndef BTC_HPP
# define BTC_HPP

# include <iostream>
# include <algorithm>
# include <fstream>
# include <sstream>
# include <map>
# include <limits.h>

class BitcoinExchange
{
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &old_obj);
        BitcoinExchange &operator=(const BitcoinExchange &old_obj);
        ~BitcoinExchange();

        void getData();

    private:
        std::map<std::string, float>    _data;




};




#endif