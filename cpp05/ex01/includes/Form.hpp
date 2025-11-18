# pragma once

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{

	public:

		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		std::string getName()  const;
		int getGradeToSign()  const;
		int getGradeToExecute()  const;
		bool getSigned() const;

		void beSigned(Bureaucrat &bur);

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

std::ostream &			operator<<( std::ostream & o, Form const & i );