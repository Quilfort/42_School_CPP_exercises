#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{
	public:
		// Constructors
		Data();
		Data(const Data &copy);
		
		// Destructor
		~Data();
		
		// Operators
		Data & operator=(const Data &assign);
		
	private:
		std::string secret;
};

#endif