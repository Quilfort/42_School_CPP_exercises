#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    //std::cout << "Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &old_obj)
{
    //std::cout << "Copy constructor called" << std::endl;
    _data = old_obj._data;
    _inputDate = old_obj._inputDate;
    _bitcoinCount = old_obj._bitcoinCount;
    _value = old_obj._value;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &old_obj)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    _data = old_obj._data;
    _inputDate = old_obj._inputDate;
    _bitcoinCount = old_obj._bitcoinCount;
    _value = old_obj._value;
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
        std::map<std::string, float>::iterator iter;
        for (iter = _data.begin(); iter != _data.end(); iter++)
        {
            if (_inputDate == iter->first)
                break; 
            if (_inputDate < iter->first)
            {
                iter--;
                break; 
            }
        }
        float price;
        float btc;
        std::stringstream stream;
        stream << iter->second;
        stream >> price;
        btc = price * _value;
        std::cout << _inputDate << " => ";
        std::cout << _value << " = ";
        std::cout << btc << std::endl;
	}
}

bool BitcoinExchange::checkInput(std::string input)
{
	std::string delimiter = " | ";
	_inputDate = input.substr(0, input.find(delimiter));
	_bitcoinCount = input.substr(input.find(delimiter) + 3, input.length());
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
    int pointCount = 0;
    if (_bitcoinCount[0] == '-' || _bitcoinCount.size() == 0)
    {
        std::cout << "Error: not a positive number" << std::endl;
        return (false);
    }
    for (size_t i = 0; i < _bitcoinCount.size(); i++)
    {
        if (!isdigit(_bitcoinCount[i]))
        {
            if (_bitcoinCount[i] == '.')
            {
                pointCount++;
                if (pointCount > 1)
                {
                    std::cout << "Error: bad input => " << _bitcoinCount << std::endl;
                    return (false);  
                }
            }
            else
            {
                std::cout << "Error: value is not a number" << std::endl;
                return (false);  
            }
        }
    }
    std::stringstream stream;
    stream << _bitcoinCount;
    stream >> _value;
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
