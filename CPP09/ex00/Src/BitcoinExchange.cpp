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
        std::cout << "CSV dont exist" << std::endl;
    }
    float value;
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
}







