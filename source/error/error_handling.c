/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** main
*/


#include "../../include/main.h"

static int my_atoi(const char *s)
{
    int res = 0;
    unsigned int digit = 0;
    char sign = s[0];

    if (*s == '-')
        ++s;
    else
        if (*s == '+')
            ++s;
    do {
        digit = *s - '0';
        if (digit > 9)
            break;
        res = (10 * res) + digit;
    } while (++s);
    if (sign == '-')
        return (-res);
    return (res);
}

static bool preg_match(const char *s1, const char *s2)
{
    for (int i = 0; s1[i]; ++i)
        if ('.' != s1[i] && '#' != s1[i] && '@' != s1[i])
            return (false);
    for (int i = 0; s2[i]; ++i)
        if ('.' != s2[i] && '@' != s2[i])
            return (false);
    return (true);
}

bool error_handling(const int ac, char **av)
{
    if (ac != 4)
        return (false);
    if (0 > my_atoi(av[1]) || 9 < my_atoi(av[1]))
        return (false);
    if (!preg_match(av[2], av[3]))
        return (false);
    return (true);
}
