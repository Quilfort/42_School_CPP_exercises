#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(4);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;

    mstack.pop();
    std::cout << mstack.size() << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;

    mstack.push(8);
    mstack.push(3);
    mstack.push(737);
    mstack.push(19);
    std::cout << mstack.size() << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;

    MutantStack<int>::iterator iter = mstack.begin();
    MutantStack<int>::iterator end = mstack.end();
    while (iter != end)
    {
        std::cout << *iter << std::endl;
        ++iter;
    }

    std::cout << "---------------------------------------------------" << std::endl;
    MutantStack<int>::rev rev_iter = mstack.rbegin();
    MutantStack<int>::rev rev_end = mstack.rend();

    while (rev_iter != rev_end)
    {
        std::cout << *rev_iter << std::endl;
        ++rev_iter;
    }
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "-------- Now with a list -------" << std::endl;   
    std::cout << "---------------------------------------------------" << std::endl;
    std::list<int>  testlist;
    testlist.push_back(4);
    testlist.push_back(17);
    std::cout << testlist.back() << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    testlist.pop_back();
    std::cout << testlist.size() << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    testlist.push_back(8);
    testlist.push_back(3);
    testlist.push_back(737);
    testlist.push_back(19);
    std::cout << testlist.size() << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::list<int>::iterator listiter = testlist.begin();
    std::list<int>::iterator listend = testlist.end();
    while (listiter != listend)
    {
        std::cout << *listiter << std::endl;
        ++listiter;
    }
    std::cout << "---------------------------------------------------" << std::endl;
    return 0;
}