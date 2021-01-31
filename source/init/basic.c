/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** main
*/

#include "../../include/main.h"

bool basic(const int ac, char **av, main_t *frac)
{
    frac->ac = ac;
    frac->s1 = av[2];
    frac->s2 = av[3];
    frac->spr_nbr = av[1];

    return (true);
}
