#include "includes/ClapTrap.hpp"
#include "includes/ScavTrap.hpp"


int main( void )
{
    ClapTrap a("Alice");
    ScavTrap b("Bob");

    // Constructors
    // std::cout << YELLOW << "--DEFAULT CONSTRUCTOR--" << RESET << std::endl;
    // ClapTrap noname;
    // std::cout << YELLOW << "--COPY CONSTRUCTOR--" << RESET << std::endl;
    // ClapTrap c( noname );
    // std::cout << YELLOW << "--ASSIGNMENT CONSTRUCTOR--"<< RESET  << std::endl;
    // c = a;

    // // Constructors
    // std::cout << MAG << "--SCAV DEFAULT CONSTRUCTOR--"<< RESET << std::endl;
    // ScavTrap snoname;
    //  std::cout << MAG << "--SCAV COPY CONSTRUCTOR--" << RESET << std::endl;
    // ScavTrap sc( snoname );
    // std::cout << MAG << "--SCAV ASSIGNMENT CONSTRUCTOR--" << RESET << std::endl;
    // sc = b;

    a.attack("Bob");
    b.attack("Alice");
    b.guardGate();
    b.guardGate();

    return (0);
}