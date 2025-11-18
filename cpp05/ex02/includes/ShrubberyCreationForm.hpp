#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{

	private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm ( const std::string target );
        ShrubberyCreationForm( const ShrubberyCreationForm& copy );
        ShrubberyCreationForm& operator=( const ShrubberyCreationForm& copy );
        ~ShrubberyCreationForm();

        std::string getTarget() const;
        
        void execute( Bureaucrat const & executor ) const;
};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */