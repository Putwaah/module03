

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name, int i, int j, int x) ScavTrap(name), FragTrap(name){
    this->_name = name;
    ClapTrap::setName(name + "_clap_name");
    FragTrap::_hitPoint = 100;
    ScavTrap::_energyPoint = 50;
    FragTrap::_attackPoint = 30;
    std::cout << "SALUT\n";
}