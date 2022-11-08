#include <iostream>
#include <string>

class ClapTrap{
private:
	std::string Name;
	long Hitpoints;
	long Enegypoints;
	long Attackdamage;
public:
	ClapTrap(const std::string myName);
	~ClapTrap(void);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
