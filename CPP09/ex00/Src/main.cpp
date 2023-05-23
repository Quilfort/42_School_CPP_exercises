#include "BitcoinExchange.hpp"

int error_message(std::string string)
{
    std::cout << string << std::endl;
    exit(EXIT_FAILURE);
}

bool checkInput(std::ifstream *infile, std::string infileName)
{
    infile->open(infileName);
    if (!*infile)
	{
        std::cout << "Input file does not exist" << std::endl;
        return (false);
    }
    std::string	line;
    if (!infile->eof())
    {
        getline(*infile, line);
        if (line != "date | value")
        {
            std::cout << "First line incorrect | should be date | value" << std::endl;
            return (false);
        }
    }
    return (true);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        error_message("Error: Wrong amount of arguments");
    //Check if file is available
	std::ifstream	infile;
    if (checkInput(&infile, argv[1]) == false)
    {
        infile.close();
        return (EXIT_FAILURE);
    }
 
    //Check CSV file and put in map
    BitcoinExchange btc;
    try
    {
        btc.getData();
    }
    catch(const BitcoinExchange::FileNotValidException& e)
    {
        infile.close();
        std::cerr << e.what() << '\n';
        return (EXIT_FAILURE);
    }
    // Check lines
    std::string	line;
    while (!infile.eof())
    {
        getline(infile, line);
        if (line.size() == 0)
            error_message("Error: Empty line in input file");
        btc.checkBitcoin(line);
    }
    // Close files
	infile.close();
    return (EXIT_SUCCESS);
}