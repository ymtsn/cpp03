#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string myName)
:Name(myName), Hitpoints(10),Enegypoints(10),Attackdamage(0)
{
	std::cout << "ClapTrap " << Name << " constructed !" << std::endl;
}

/* ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap " << Name << " constructed !" << std::endl;
} */

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << Name << " destructed !" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (Enegypoints <= 0)
	{
		std::cout << "ClapTrap " << Name << " is out of enegy, cannot attack !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << Name << " atacks " << target << " , causing " << Attackdamage << " points of damage!" << std::endl;
	Enegypoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << Name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (Enegypoints <= 0)
	{
		std::cout << Name << " is out of enegy, cannot repair !" << std::endl;
		return ;
	}
	std::cout <<  Name << " is repaired " << amount << " points of damage!" << std::endl;
	Enegypoints--;
}
