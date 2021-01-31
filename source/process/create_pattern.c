/*
** EPITECH PROJECT, 2020
** CPE_dante_2019
** File description:
** main
*/

#include "../../include/main.h"

static int strln(const char *s)
{
    int i = 0;

    for (i = 0; s[i]; ++i);
    return (i);
}

static bool my_strcmp(char *s1, char *s2)
{
    for (int i = 0; s1[i]; ++i)
        if (s1[i] != s2[i]) return (false);
    return (true);
}

static void part2(main_t *frac)
{
    int n = 0;
    int k = 0;
    int b = 0;

    for (int i = 0; true; i += (n + 1), ++b) {
        for (n = i; frac->s1[n] != '@' && frac->s1[n]; ++n) write(1, &frac->s1[n], 1);
        for (k = i; frac->s2[k] != '@' && frac->s2[k]; ++k) write(1, &frac->s2[k], 1);
        if (b == 1) break;
        write(1, "\n", 1);
    }
}

static void loop_2arg(main_t *frac)
{
    for (int i = 0, n = 0; true; ++i) {
        if (!frac->s1[i] && n == 1) {
            write(1, "\n", 1);
            part2(frac);
            break;
        }
        if (n == 2 && frac->s1[i] == '@') {
            n = 0;
            write(1, "\n", 1);
            continue;
        }
        if (n != 2 && frac->s1[i] == '@') {
            n++;
            i = 0;
        } else if (n != 1 && !frac->s1[i]) {
            n++;
            i = 2;
        } else write(1, &frac->s1[i], 1);
    }
}

bool create_pattern(main_t *frac)
{
    if (my_strcmp(frac->spr_nbr, "1"))
        for (int i = 0; frac->s1[i]; ++i)
            write(1, ((frac->s1[i] == '@') ? "\n" : &frac->s1[i]) , 1);
    if (my_strcmp(frac->spr_nbr, "2")) loop_2arg(frac);
    write(1, "\n", 1);
    return (true);
}
