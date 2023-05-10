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
    if (checkInputDate() == false || checkInputAmount() == false )
        return (false);
	return (true);
}

bool BitcoinExchange::checkInputDate()
{
    struct tm tm;
    if (!strptime(_inputDate.c_str(), "%F", &tm) || _inputDate.size() > 10) 
    {
        std::cout << "Error: bad input => " << _inputDate << std::endl;
        return (false); 
    }
    std::stringstream stream;
    int year;
    stream << _inputDate.substr(0, _inputDate.find("-"));
    stream >> year;
    if (year < 2009)
    {
        std::cout << "Error: bad input => " << _inputDate << std::endl;
        return (false);
    }
    return (true);
}

bool BitcoinExchange::checkInputAmount()
{
    if (_bitcoinCount[0] == '-')
    {
        std::cout << "Error: not a positive number" << std::endl;
        return (false);
    }
    for (size_t i = 0; i < _bitcoinCount.size(); i++)
    {
        if (i == 4)
        {
            std::cout << "Error: too large a number." << std::endl;
            return (false);   
        }
        if (!isdigit(_bitcoinCount[i]))
        {
            std::cout << "Error: value is not a number" << std::endl;
            return (false);            
        }
    }
    std::stringstream stream;
    stream << _bitcoinCount;
    stream >> _value;
    std::cout << "Value: " << _value << std::endl;
    if (_value > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return (false);  
    }
    return (true);
}

const char *BitcoinExchange::FileNotValidException::what(void) const throw()
{
	return ("CSV dont exist");
};
