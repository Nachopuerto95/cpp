#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int main()
{
	Intern intern;

    AForm* form = intern.makeForm("Invalid form", "bobby");  
	AForm* form2 = intern.makeForm("robotomy request", "bobby");  
	AForm* form3 = intern.makeForm("presidential pardon", "bobby");  

    if (form) delete form;
	if (form2) delete form2;
	if (form3) delete form3;

    return 0;
}
