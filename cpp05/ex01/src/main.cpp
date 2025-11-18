#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main()
{
    try
    {
        std::cout << "\n--- Testing valid case ---\n" << std::endl;

        Bureaucrat  alfred( "Alfred", 100 );
        Form        contract( "Contract", 100, 50 );
        
        std::cout   << "Before signing: "
                    << contract 
                    << std::endl;
        
        alfred.signForm( contract );
        
        std::cout   << "After signing: "
                    << contract 
                    << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    try
    {
        std::cout << "\n--- Testing exception ---\n" << std::endl;

        Bureaucrat  intern( "Intern", 100 );
        Form        confidentialinfo( "confidentialinfo", 5, 1 );
        
        std::cout   << "Before signing: "
                    << confidentialinfo
                    << std::endl;
        
        intern.signForm( confidentialinfo );
        
        std::cout   << "After signing: "
                    << confidentialinfo
                    << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    return (0);
}