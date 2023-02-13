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
    return (new A());
}

int main()
{
    Base* random = generate();

    std::cout << random << std::endl;

}