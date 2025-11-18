# pragma once

# include <iostream>
# include <string>

class Bureaucrat;

class AForm
{

	public:

		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm( AForm const & src );
		virtual ~AForm();

		AForm &		operator=( AForm const & rhs );

		std::string getName()  const;
		int getGradeToSign()  const;
		int getGradeToExecute()  const;
		bool getSigned() const;

		void beSigned(Bureaucrat &bur);
		virtual void    execute( Bureaucrat const & executor ) const = 0;
		void checkExecuteRequirements(Bureaucrat const & executor) const;

		class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw();
        };

		class GradeTooHighException : public std::exception
		{
			public:
				const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char*	what() const throw();
		};


	private:

		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;

};

std::ostream &			operator<<( std::ostream & o, AForm const & i );