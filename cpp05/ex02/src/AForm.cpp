#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm() : _name("Defualt"),  _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "AForm default constructor has been called!" << std::endl;
}

AForm::AForm( const std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) 
{
	std::cout << "AForm  constructor has been called!" << std::endl;

	 if ( _gradeToSign > 150 )
        throw ( GradeTooLowException() );
    if ( _gradeToSign < 1 )
        throw ( GradeTooHighException() );
    
    if ( _gradeToExecute > 150 )
        throw ( GradeTooLowException() );
    if ( _gradeToExecute < 1 )
        throw ( GradeTooHighException() );
}

AForm::AForm( const AForm & src ) : _name( src._name ), _signed( src._signed ), _gradeToSign( src._gradeToSign ), _gradeToExecute( src._gradeToExecute )
{
		std::cout << "AForm copy constructor has been called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
	std::cout << "AForm destructor has been called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs._signed;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
    o << "AForm: " << i.getName()
        << " Grade to sign = " << i.getGradeToSign()
        << " Grade to execute = " << i.getGradeToExecute()
        << " is signed = " << i.getSigned();
    return ( o );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void AForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > _gradeToSign)
		throw (GradeTooLowException());
	_signed = true;
}

void AForm::checkExecuteRequirements(Bureaucrat const & executor) const
{
    if (!getSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string AForm::getName() const
{
	return _name;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

bool AForm::getSigned() const
{
	return _signed;
}

/*
** --------------------------------- EXCEPTIONS ---------------------------------
*/


const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low. Grade must be between 1 and 150.";
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high. Grade must be between 1 and 150.";
}
const char* AForm::FormNotSignedException::what() const throw()
{
    return "AForm is not signed!.";
}
/* ************************************************************************** */