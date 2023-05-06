#include "BitcoinExchange.hpp"

//https://cdn.intra.42.fr/pdf/pdf/83098/en.subject.pdf

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
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


    return 0;

}