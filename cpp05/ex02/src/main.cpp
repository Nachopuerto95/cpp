#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main()
{
	std::cout << "---------- Shrubbery -----------\n" << std::endl;
    ShrubberyCreationForm myform("home");
    Bureaucrat bob("Bob", 1);
    Bureaucrat alice("Alice", 150);

	myform.execute(bob);
    bob.signAForm(myform);

    myform.execute(bob);
    myform.execute(alice);

	std::cout << "\n---------- Robotomy -----------\n" << std::endl;
	RobotomyRequestForm myRobot("robotomizer");
	bob.signAForm(myRobot);
	myRobot.execute(bob);
	myRobot.execute(alice);

	std::cout << "\n---------- Presidential -----------\n" << std::endl;
	PresidentialPardonForm presidential("presidential");
	bob.signAForm(presidential);
	presidential.execute(bob);
    return 0;
}
