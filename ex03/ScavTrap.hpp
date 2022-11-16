#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
public:
	ScavTrap(const std::string myName):ClapTrap(myName){};
	~ScavTrap(void);
	void attack(const std::string& target) override;
	void gurdGate(void);
};
