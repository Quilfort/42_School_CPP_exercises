#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain();
        Brain(const Brain &old_obj);
        Brain &operator=(const Brain &old_obj);
        ~Brain();

        std::string ideas[100];

    private:

};

#endif