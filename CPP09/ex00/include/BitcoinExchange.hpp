#ifndef BTC_HPP
# define BTC_HPP

# include <iostream>
# include <algorithm>
# include <string>
# include <fstream>
# include <sstream>
# include <map>
# include <limits.h>
# include <ctime>

class BitcoinExchange
{
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &old_obj);
        BitcoinExchange &operator=(const BitcoinExchange &old_obj);
        ~BitcoinExchange();

        void getData();
        void checkBitcoin(std::string input);
        bool checkInput(std::string input);
        bool checkInputDate();
        bool checkInputAmount();

        class FileNotValidException : std::exception
		{
			public:
				const char *what() const throw ();
		};

    private:
        std::map<std::string, float>    _data;
        std::string						_inputDate;
        std::string 					_bitcoinCount;
        float        	 				_value; 
};
#endif