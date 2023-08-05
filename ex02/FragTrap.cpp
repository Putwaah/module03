#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30){
    std::cout << this->_name << " is a FragTrap!\n";
}

FragTrap::~FragTrap(){
     std::cout << this->_name << " goes to look for other people!" << std::endl;
}

void   FragTrap::highFivesGuys(){
    std::string answer;

    std::cout << this->_name << " request an High Five" << std::endl
        << "Is it good for you ?" << std::endl;
    std::getline(std::cin, answer);
    if (answer.compare("yes") == 0 || answer.compare("Yes") == 0) 
            std::cout << this->_name << " is happy!" << std::endl;
    else
         std::cout << "Nobody wants an High Five " << this->_name << " is disapponted and go away!" << std::endl;
        
}