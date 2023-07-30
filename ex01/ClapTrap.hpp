#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		 ClapTrap(std::string name, int hit, int energy, int attack);
		~ClapTrap();
		ClapTrap (ClapTrap &copy);
		ClapTrap &operator=(ClapTrap &copy);
		void	setName(const std::string name);
		std::string	getName();
		void	setHitPoint(int HitPoint);
		int		getHitPoint();
		void	setEnergyPoint(int EnergyPoint);
		int		getEnergyPoint();
		void	setAttackPoint(int AttackPoint);
		int		getAttackPoint();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string _name;
		int	_hitPoint;
		int	_energyPoint;
		int _attackPoint;
};


#endif
