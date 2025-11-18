#include "../includes/Intern.hpp"
#include "../includes/AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	std::cout << "Intern default constuctor has been called!" << std::endl;
}

Intern::Intern( const Intern & src )
{
	(void)src;
	std::cout << "Intern copy constuctor has been called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	std::cout << "Intern destructor has been called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs ) {}
	std::cout << "Intern copy assingment constuctor has been called!" << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm* createShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm* createRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm* createPresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string formName, const std::string target)
{
    const std::string names[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm* (*creators[3])(const std::string) = {
        createShrubbery,
        createRobotomy,
        createPresidential
    };

    for (int i = 0; i < 3; i++)
    {
        if (formName == names[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return creators[i](target);
        }
    }
    std::cout << "Intern: form not found" << std::endl;
    return NULL;
}
/*
** --------------------------------- EXCEPTIONS ---------------------------------
*/

/* ************************************************************************** */