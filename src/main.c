/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "../include/104intersection.h"

int main(int ac, char **av)
{
    if (ac == 2) {
        description(av[1]);
        return (84);
    }
    for (int i = 1; i < ac; i++)
        if (error_case(av[i]) == 84)
            return (84);
    if (ac != 9)
        return (84);
    else if (ac == 9 && atof(av[8]) != 0)
        inter((av[1]), av[2], av[3], av[4], av[5], av[6], av[7], av[8]);
    else
        return (84);
    return (0);
}
