#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat()
{
		std::cout << "Bureaucrat default constuctor has been called!" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor has been called!" << std::endl;
	if (_grade  < 1)
		throw ( GradeTooHighException() );
	if (_grade > 150)
		throw ( GradeTooLowException() );
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name( src._name ), _grade( src._grade )
{
	std::cout << "Bureaucrat copy constuctor has been called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor has been called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
	}
	std::cout << "Bureaucrat copy assingment constuctor has been called!" << std::endl;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << " Bureaucrat grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Bureaucrat::incrementGrade()
{
	int nextGrade = _grade - 1;
	if (nextGrade < 1)
		throw (GradeTooHighException());
	else
		_grade--;
}
void		Bureaucrat::decrementGrade()
{
	int nextGrade = _grade + 1;
	if (nextGrade > 150)
		throw (GradeTooHighException());
	else
		_grade++;
}
void Bureaucrat::signAForm(AForm &Aform)
{
    try
    {
        Aform.beSigned(*this);
        std::cout 
            << this->getName()
            << " signed "
            << Aform.getName()
            << "! Signing requirement was "
            << Aform.getGradeToSign()
            << ". Grade to execute would be: "
            << Aform.getGradeToExecute()
            << std::endl;
    }
    catch ( AForm::GradeTooLowException &e )
    {
        std::cout
            << this->getName()
            << " couldn't sign "
            << Aform.getName()
            << "! "
            << e.what()
            << std::endl;
    }
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string	Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}
/*
** --------------------------------- EXCEPTIONS ---------------------------------
*/

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low. Grade must be between 1 and 150.");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high. Grade must be between 1 and 150.");
}

/* ************************************************************************** */