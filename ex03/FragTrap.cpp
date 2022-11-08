#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string myName):ClapTrap(myName)
{
	Hitpoints = 100;
	Enegypoints = 100;
	Attackdamage = 30;
	std::cout << "ScavTrap " << Name << " constructed !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "ScavTrap " << Name << " destructed !" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (Enegypoints <= 0)
	{
		std::cout << "ScavTrap " << Name << " is out of enegy, cannot attack !" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << Name << " atacks " << target << " , causing " << Attackdamage << " points of damage!" << std::endl;
	Enegypoints--;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << Name << " is in GateKeeper Mode " << std::endl;
}
