// https://cdn.intra.42.fr/pdf/pdf/68807/en.subject.pdf
//dynamic cast

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    // Random 0 - 2 A / B / C
    // Return NULL when failed
    //return (new A());
    //return (new B());
    return (new C());
    //return (NULL);
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

int main()
{
    Base* random = generate();

    //std::cout << random << std::endl;
    identify(random);

}
