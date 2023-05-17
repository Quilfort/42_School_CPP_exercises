#ifndef MSTACK_HPP
# define MSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <list>
# include <limits.h> 

template<typename T>
class MutantStack : public std::stack<T>
{
	public:

		MutantStack(){};
		MutantStack(const MutantStack &old_obj) : std::stack<T>(old_obj)
		{
			*this = old_obj;
		}
    	MutantStack &operator=(const MutantStack &old_obj)
		{
			(void)old_obj;
			return (*this);
		}
		~MutantStack(){};
		typedef typename std::stack<T>::container_type::iterator 			iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator 	rev;
		iterator begin()
		{
			return (this->c.begin());
		}

		iterator end()
		{
			return (this->c.end());
		}

		rev rbegin()
		{
			return (this->c.rbegin());
		}
		rev rend()
		{
			return (this->c.rend());
		}
};
#endif