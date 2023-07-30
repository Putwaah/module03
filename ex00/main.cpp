#include "ClapTrap.hpp"

int main(){

	ClapTrap Witcher("\e[0;35mWITCHER\e[0;m");
	Witcher.attack("\e[0;31mBARBAR\e[0;m");
	Witcher.beRepaired(1);
	Witcher.takeDamage(3);
	return 0;

}
