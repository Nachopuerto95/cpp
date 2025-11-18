#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{

	private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm ( const std::string target );
        RobotomyRequestForm( const RobotomyRequestForm& copy );
        RobotomyRequestForm& operator=( const RobotomyRequestForm& copy );
        ~RobotomyRequestForm();

        std::string getTarget() const;
        
        void execute( Bureaucrat const & executor ) const;
};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ******************************************* RobotomyRequestForm_H */