#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20){
	std::cout << this->_name << " is a ScavTrap!\n";
}

ScavTrap::~ScavTrap(){
 std::cout << "The power of ScavTrap " << this->_name << " disappear" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << this->_name << " is now in Gate Keeper mode" << std::endl;
}
