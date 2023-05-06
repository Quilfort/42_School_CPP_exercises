#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    //std::cout << "Default constructor called" << std::endl;
    
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &old_obj)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;    
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &old_obj)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    (void)old_obj;
    return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
    //std::cout << "Destructor called" << std::endl;
}

void BitcoinExchange::getData()
{
    std::string dataName = "data.csv";
	std::ifstream	dataFile;
    dataFile.open(dataName);
    if (!dataFile)
	{
        dataFile.close();
        throw BitcoinExchange::FileNotValidException();
    }
    float 		value;
    std::string dataLine;
    std::string dataKey;
    //First Line
    getline(dataFile, dataLine);
    while (getline(dataFile, dataKey, ','))
    {
        getline(dataFile, dataLine);
        std::stringstream stream(dataLine);
        stream >> value;
        _data[dataKey] = value;
    }
    dataFile.close();
}

void BitcoinExchange::checkBitcoin(std::string input)
{
	if (checkInput(input) == true)
	{
		std::map<std::string, float>::iterator iter = _data.begin();
    	std::cout << "Key: " << iter->first << ", Value: " << iter->second << std::endl;
	}
}

bool BitcoinExchange::checkInput(std::string input)
{
	std::cout << "Input: " <<  input << std::endl;
	std::string delimiter = " | ";
	_inputDate = input.substr(0, input.find(delimiter));
	_bitcoinCount = input.substr(input.find(delimiter) + 3, input.length());
	std::cout << "Date: " <<  _inputDate << std::endl;
	std::cout << "Amount: " <<  _bitcoinCount << std::endl;







	return (true);
}

const char *BitcoinExchange::FileNotValidException::what(void) const throw()
{
	return ("CSV dont exist");
};
