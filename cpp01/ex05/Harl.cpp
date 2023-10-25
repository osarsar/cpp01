#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "----call constructor----\n";
}

Harl::~Harl()
{
    std::cout << "----call destructor----\n";
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn t be asking for more!\n";
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{  
    typedef void (Harl::*t_mbr)(void);
    t_mbr ptr_to_mbr[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string all_levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (level == all_levels[i])
            return ((this->*ptr_to_mbr[i])());
        i++;
    }
    std::cout << "invalid argument\n";
}
