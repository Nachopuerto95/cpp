#include "../includes/Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat defauld;
        Bureaucrat a("Alice", 2);
        Bureaucrat b("Bob", 148);
		a.incrementGrade();
		b.decrementGrade();
		b.decrementGrade();	
		b.decrementGrade();
    }
    catch ( Bureaucrat::GradeTooHighException &e )
    {
        std::cout << e.what() << std::endl;
    }
    catch ( Bureaucrat::GradeTooLowException &e )
    {
        std::cout << e.what() << std::endl;
    }

	try
	{
		Bureaucrat b("Bob", 180);
	}
	catch (std::exception &e)
	{
		 std::cout << e.what() << std::endl;
	}
}