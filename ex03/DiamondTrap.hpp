#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
private:
	std::string Name;
public:
	DiamondTrap(const std::string name);
	void whoAmI(void);
	void attack(const std::string& target);
};
