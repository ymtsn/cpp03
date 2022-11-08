#include <iostream>
#include <string>

class ClapTrap{
protected:
	std::string Name;
	long Hitpoints;
	long Enegypoints;
	long Attackdamage;
	ClapTrap(void);
public:
	ClapTrap(const std::string myName);
	~ClapTrap(void);
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
