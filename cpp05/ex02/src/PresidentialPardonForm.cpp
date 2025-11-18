#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Bureaucrat.hpp"

#include <cstdlib>
#include <ctime>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm()
    : AForm( "PresidentialPardon Creation", 25, 5), _target( "DefaultPlace" ) 
{
    std::cout << "Default constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm ( const std::string target ) 
    : AForm( "PresidentialPardon Creation", 25, 5 ), _target(target)
{
    std::cout << " PresidentialPardon constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& copy )
    : AForm( copy ), _target( copy._target)
{
    std::cout << "Copy PresidentialPardon constructor called!" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& copy )
{
    std::cout << "Assignment PresidentialPardon operator called!" << std::endl;
    if ( this != &copy )
    {
        AForm::operator=(copy);
        this->_target = copy._target;
    }
        return ( *this );
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor PresidentialPardon called!" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
    return ( _target );
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
    {
		checkExecuteRequirements(executor);
        std::cout << executor.getName() << " executed " << getName() << std::endl;
		std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox"<< std::endl;
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
