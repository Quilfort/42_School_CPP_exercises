#include "Intern.hpp"

Intern::Intern()
{
    //std::cout << "Default constructor called" << std::endl;
}

Intern::Intern(const Intern &old_obj)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
}

Intern& Intern::operator=(const Intern &old_obj)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    (void) old_obj;
    return (*this);
}

Intern::~Intern()
{
    //std::cout << "Destructor called" << std::endl;
}

//Exception
const char *Intern::InvalidArgument::what(void) const throw()
{
	return ("WRONG FORM: REQUEST ROBOTOMY | PRESIDENTIAL | SHRUBBERY");
};

// Create Form
static Form	*makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static Form	*makeRobotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static std::string upperName(std::string formName)
{
    for (size_t j = 0; j < formName.length(); j++)
        formName[j] = (char) toupper(formName[j]);
    return (formName);
}

Form* Intern::makeForm(std::string formName, std::string target)
{
    Form* createdForm = NULL;
    formName = upperName(formName);

    std::string	formArray[] = {
		"ROBOTOMY",
		"PRESIDENTIAL", 
		"SHRUBBERY",
	};

    int i = 0;
    while (i < 3)
    {
        if (formName == formArray[i])
            break;
        i++;
    }
    switch (i) {
		case 0:
    		createdForm = makeRobotomy(target);
            break;
  		case 1:
            createdForm = makePresident(target);
            break;
 		case 2:
    		createdForm = makeShrubbery(target);
			break ;
		default:
    		throw Intern::InvalidArgument();
	}
    std::cout << "Intern created " << formArray[i] << std::endl;
    return (createdForm);
}