#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20){
	std::cout << "ScavTrap " << this->_name << " join us!\n";
}

ScavTrap::~ScavTrap(){

}

void ScavTrap::guardGate(){
	
}
