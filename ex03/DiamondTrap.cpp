#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name):Name(name),FragTrap(name),ScavTrap(name)
{
	std::cout << "DiamondTrap " << Name << " constructed !" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
