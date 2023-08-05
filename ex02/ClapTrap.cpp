#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
}

 ClapTrap::ClapTrap(std::string name, int hit, int energy, int attack): _name(name){
	 this->_hitPoint = hit;
	 this->_energyPoint = energy;
	 this->_attackPoint = attack;
 std::cout << "A new player: " << _name << " join us !" << std::endl;
 }

ClapTrap::~ClapTrap(){
	std::cout << "See you soon : " << _name << std::endl;
}


ClapTrap &ClapTrap::operator=(ClapTrap &copy){
	if (&copy != this){
		this->_name = copy.getName();
		this->_hitPoint = copy.getHitPoint();
		this->_energyPoint = copy.getEnergyPoint();
		this->_attackPoint = copy.getAttackPoint();
	}	
		return (*this);
}

ClapTrap::ClapTrap(ClapTrap &copy){
	*this = copy;
}

void	ClapTrap::setName(const std::string name){
	_name = name;
}

std::string	ClapTrap::getName(){
	return this->_name;
}

void	ClapTrap::setHitPoint(int HitPoint){
	_hitPoint = HitPoint;
}

int		ClapTrap::getHitPoint(){
	return this->_hitPoint;
}

void	ClapTrap::setEnergyPoint(int EnergyPoint){
	_energyPoint = EnergyPoint;
}

int		ClapTrap::getEnergyPoint(){
	return this->_energyPoint;
}

void	ClapTrap::setAttackPoint(int AttackPoint){
	_attackPoint = AttackPoint;
}

int		ClapTrap::getAttackPoint(){
	return this->_attackPoint;
}

void	ClapTrap::attack(const std::string& target){
	if (this->_energyPoint > 0){
		ClapTrap claptrap(target, 10, 10, 0);
		claptrap.setName(target);
		claptrap._hitPoint -= this->_attackPoint;
		this->_energyPoint -= 1;
		std::cout << this->_name << " attack " << claptrap._name << " causing " << this->_attackPoint << " points of damage!" << std::endl; 
	}
	else
		std::cout << this->_name << "haven't Mana !" << std::endl;
				
}

void	ClapTrap::takeDamage(unsigned int amount){
	this->_hitPoint -= amount;
	std::cout << "God judge "<< this->_name << " and take " << amount << " damages !" << std::endl
		<< this->_name << " have " << this->_hitPoint << " Hit Point" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	this->_hitPoint += amount;
	this->_energyPoint -= 1;
	std::cout << this->_name << " use Mercurochrome and refind " << amount << " hit point !" << std::endl
		<< this->_name << " have " << this->_hitPoint << " Hit Point" << std::endl;

}


