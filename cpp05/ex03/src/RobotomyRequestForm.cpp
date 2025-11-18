#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Bureaucrat.hpp"

#include <cstdlib>
#include <ctime>
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm()
    : AForm( "Robotomy Creation", 72, 45), _target( "DefaultPlace" ) 
{
    std::cout << "Default constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm ( const std::string target ) 
    : AForm( "Robotomy Creation", 72, 45 ), _target(target)
{
    std::cout << " Robotomy constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& copy )
    : AForm( copy ), _target( copy._target)
{
    std::cout << "Copy Robotomy constructor called!" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& copy )
{
    std::cout << "Assignment Robotomy operator called!" << std::endl;
    if ( this != &copy )
    {
        AForm::operator=(copy);
        this->_target = copy._target;
    }
        return ( *this );
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor Robotomy called!" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
    return ( _target );
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try
    {
		checkExecuteRequirements(executor);
        std::cout << executor.getName() << " executed " << getName() << std::endl;
		srand(time(NULL));

		std::cout << "Brrrrr... vrrrrr... zzzzzz..." << std::endl;
		if (rand() % 2 == 0)
			std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "The robotomy failed!" << std::endl;
    }
    catch (AForm::FormNotSignedException & e)
    {
        std::cout << executor.getName() << " couldn't execute " 
                  << getName() << " because the form is not signed!" << std::endl;
    }
    catch (AForm::GradeTooLowException & e)
    {
        std::cout << executor.getName() << " couldn't execute " 
                  << getName() << " because " << e.what() << std::endl;
    }
}
