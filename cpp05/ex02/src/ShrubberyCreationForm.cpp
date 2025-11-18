#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Bureaucrat.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm( "Shrubbery Creation", 145, 137), _target( "DefaultPlace" ) 
{
    std::cout << "Default constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm ( const std::string target ) 
    : AForm( "Shrubbery Creation", 145, 137 ), _target(target)
{
    std::cout << " shrubbery constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& copy )
    : AForm( copy ), _target( copy._target)
{
    std::cout << "Copy shrubbery constructor called!" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& copy )
{
    std::cout << "Assignment shrubbery operator called!" << std::endl;
    if ( this != &copy )
    {
        AForm::operator=(copy);
        this->_target = copy._target;
    }
        return ( *this );
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor shrubbery called!" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return ( _target );
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try
    {
		checkExecuteRequirements(executor);
        std::ofstream file((_target + "_shrubbery").c_str());
        file << "    *    \n"
             << "   ***   \n"
             << "  *****  \n"
             << " ******* \n"
             << "*********\n"
             << "   |||   \n";
        std::cout << executor.getName() << " executed " << getName() << std::endl;
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
