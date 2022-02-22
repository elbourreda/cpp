
#include <iostream>

class ClapTrap
{
	private:
		std::string Name;
		int HitPoints; // Hit points (10)
		int EnergyPoints;// Energy points (10)
		int AttackDamage;// Attack damage (0)
	public:
		ClapTrap();
		ClapTrap(ClapTrap &clp);
		ClapTrap &operator=(ClapTrap const &clp);
		~ClapTrap();
		
		ClapTrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
