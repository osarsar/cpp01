#pragma once

#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        ~Zombie();
        void announce(void);
        Zombie* newZombie(std::string name);
        void randomChump(std::string name);
        Zombie* zombieHorde(int N, std::string name);
};
