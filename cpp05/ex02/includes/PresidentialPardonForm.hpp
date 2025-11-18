#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

	private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm ( const std::string target );
        PresidentialPardonForm( const PresidentialPardonForm& copy );
        PresidentialPardonForm& operator=( const PresidentialPardonForm& copy );
        ~PresidentialPardonForm();

        std::string getTarget() const;
        
        void execute( Bureaucrat const & executor ) const;
};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ******************************************* PresidentialPardonForm_H */