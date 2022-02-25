#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
	protected:
		std::string Name;
		int HitPoints;      // Hit points (10)
		int EnergyPoints;   // Energy points (10)
		int AttackDamage;  // Attack damage (0)
	public:
		ClapTrap(); // edited
		ClapTrap(ClapTrap &clp);
		ClapTrap &operator=(ClapTrap const &clp);
		~ClapTrap();

		ClapTrap(std::string name); // ==> ref &

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif //  CLAPTRAP_HPP