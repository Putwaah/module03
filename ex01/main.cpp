#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){

	ClapTrap Witcher("\e[0;35mWITCHER\e[0;m", 10, 10, 0);
	ScavTrap Druid("\e[0;33mDRUID\e[0;m");
	Witcher.attack("\e[0;31mBARBAR\e[0;m");
	Witcher.beRepaired(1);
	Witcher.takeDamage(3);
	std::cout << std::endl;
	Druid.guardGate();
	std::cout << "Druid have " << Druid.getHitPoint() << " hit point, "
		<<  Druid.getAttackPoint() << " Attack point and "
		<< Druid.getEnergyPoint() << " Energy point!" << std::endl;
	Druid.attack("\e[0;31mBARBAR 2\e[0;m");
	Druid.beRepaired(5);
	Druid.takeDamage(20);
	return 0;

}
