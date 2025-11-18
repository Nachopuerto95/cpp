#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("Defualt"),  _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form default constructor has been called!" << std::endl;
}

Form::Form( const std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) 
{
	std::cout << "Form  constructor has been called!" << std::endl;

	 if ( _gradeToSign > 150 )
        throw ( GradeTooLowException() );
    if ( _gradeToSign < 1 )
        throw ( GradeTooHighException() );
    
    if ( _gradeToExecute > 150 )
        throw ( GradeTooLowException() );
    if ( _gradeToExecute < 1 )
        throw ( GradeTooHighException() );
}

Form::Form( const Form & src ) : _name( src._name ), _signed( src._signed ), _gradeToSign( src._gradeToSign ), _gradeToExecute( src._gradeToExecute )
{
		std::cout << "Form copy constructor has been called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "Form destructor has been called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs._signed;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
    o << "Form: " << i.getName()
        << " Grade to sign = " << i.getGradeToSign()
        << " Grade to execute = " << i.getGradeToExecute()
        << " is signed = " << i.getSigned();
    return ( o );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > _gradeToSign)
		throw (GradeTooLowException());
	_signed = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Form::getName() const
{
	return _name;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

bool Form::getSigned() const
{
	return _signed;
}

/*
** --------------------------------- EXCEPTIONS ---------------------------------
*/


const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low. Grade must be between 1 and 150.";
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high. Grade must be between 1 and 150.";
}

/* ************************************************************************** */