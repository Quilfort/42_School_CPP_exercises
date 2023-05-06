#include "BitcoinExchange.hpp"

//https://cdn.intra.42.fr/pdf/pdf/83098/en.subject.pdf

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return (EXIT_FAILURE);
    }
    //Check if file is available
    std::string infileName = argv[1];
	std::ifstream	infile;
    infile.open(infileName);
    if (!infile)
	{
        std::cout << "Input file does not exist" << std::endl;
        return (EXIT_FAILURE);
    }
    std::string	line;
    if (!infile.eof())
    {
        getline(infile, line);
        std::cout << line << std::endl;
        if (line != "date | value")
            std::cout << "First line incorrect | should be date | value" << std::endl;
    }
    // Close files
	infile.close();
    return (EXIT_SUCCESS);

}