#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string myName):ClapTrap(myName)
{
	Hitpoints = 100;
	Enegypoints = 50;
	Attackdamage = 20;
	std::cout << "ScavTrap " << Name << " constructed !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << Name << " destructed !" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (Enegypoints <= 0)
	{
		std::cout << "ScavTrap " << Name << " is out of enegy, cannot attack !" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << Name << " atacks " << target << " , causing " << Attackdamage << " points of damage!" << std::endl;
	Enegypoints--;
}

void ScavTrap::gurdGate(void)
{
	std::cout << "ScavTrap " << Name << " is in GateKeeper Mode " << std::endl;
}
