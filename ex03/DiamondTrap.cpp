#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name):Name(name),FragTrap(name),ScavTrap(name)
{
	std::cout << "DiamondTrap " << Name << " constructed !" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is" << Name \
	<< " ClapTrap name is" << ClapTrap::Name << DiamondTrap::ScavTrap::ClapTrap::Name << std::endl;
}
