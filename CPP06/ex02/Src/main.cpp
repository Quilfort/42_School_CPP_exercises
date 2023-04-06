#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    // Onderstaande regel is in functie hetzelfde maar in main niet
    // als je generate in main meerdere keren oproept
    std::srand((unsigned) std::time(NULL));
    int number = std::rand() % 3;

    if (number == 0)
    {
        std::cout << "BASE A ACTIVATED" << std::endl;
        return (new A());
    }
    else if (number == 1)
    {
        std::cout << "BASE B ACTIVATED" << std::endl;
        return (new B());
    }
    else if (number == 2)
    {
        std::cout << "BASE C ACTIVATED" << std::endl;
        return (new C());
    }
    else
    {
        std::cout << "BASE CREATION FAILED" << std::endl;
        return (NULL);
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C" << std::endl;
    else
        std::cout << "ERROR" << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(std::bad_cast)
    { 
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch(std::bad_cast)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            }
            catch(std::bad_cast)
            {
                std::cout << "ERROR" << std::endl;
            }
        }
    }  
}

int main()
{

    Base* random = generate();
    
    identify(random);
    identify(*random);

    return (EXIT_SUCCESS);
}
