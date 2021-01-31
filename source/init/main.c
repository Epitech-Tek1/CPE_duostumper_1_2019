/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** main
*/

#include "../../include/main.h"

static bool my_strcmp(const char *s1, const char *s2)
{
    int i = 0;

    for (i = 0; s1[i]; ++i)
        if (s1[i] != s2[i])
            return (false);
    return (true);
}

int main(const int ac, char **av)
{
    main_t *frac = malloc(sizeof(main_t));

    if (!frac)
        return (84);
    if (!error_handling(ac, av) || !basic(ac, av, frac))
        return (84);
    if (my_strcmp("0", av[1]))
        display_basic();
    create_pattern(frac);
    return (EXIT_SUCCESS);
}
