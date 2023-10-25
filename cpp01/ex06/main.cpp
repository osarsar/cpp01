#include "Harl.hpp"

int main (int ac, char **av)
{
    Harl x;

    if (ac == 2)
        x.complain(av[1]);
    else
        std::cout << "invalid argument\n";
}