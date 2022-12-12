#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	// Check arguments
	if (argc != 4)
    {
        std::cout << "Check your arguments" << std::endl;
        return (EXIT_FAILURE);
    }

	// Open infile and check if available
    std::string infileName = argv[1];
	std::ifstream	infile;
	infile.open(infileName);
	if (!infile)
	{
        std::cout << "Input file does not exist" << std::endl;
        return (EXIT_FAILURE);
    }

	// Create/Check Outfile and check if it's there
	std::ofstream	outfile;
	std::string	outfileName = infileName + ".replace";
	outfile.open(outfileName);
	if (!outfile)
	{
        std::cout << "Cannot create outfile" << std::endl;
        return (EXIT_FAILURE);
    }

	// Put Infile in String
	std::string	write;
	std::string	contentString;
	std::string replace = argv[2];
    std::string newWord = argv[3];
	while (!infile.eof())
    {
        getline(infile, write);
        contentString = contentString + write;
		contentString = contentString + '\n';
    }

	// Check string for size and replace word
	int	pos = 0;
	for (int i = 0; i < (int)contentString.size(); i++)
    {
		pos = (int)contentString.find(replace, i);
		if (pos != -1 && pos == i)
		{
			outfile << newWord;
			i = i + replace.size() - 1;
		}
		else
			outfile << contentString[i];
	}

	// Close files
	infile.close();
	outfile.close();
    return (EXIT_SUCCESS);
}
