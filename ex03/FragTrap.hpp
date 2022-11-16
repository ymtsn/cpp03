#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
public:
	FragTrap(const std::string myName):ClapTrap(myName){};
	~FragTrap(void);
	void attack(const std::string& target) override;
	void highFivesGuys(void);
};
