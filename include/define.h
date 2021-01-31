/*
** EPITECH PROJECT, 2019
** Fractal
** File description:
** include lib
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84

/* Macro */
#define PREG_MATCH_S1(var) (('#' != var || '@' != var || '.' != var) ? (false) : (true))
#define PREG_MATCH_S2(var) (('.' != var || '@' != var) ? (false) : (true))

#endif /* !STRUCT_H_ */
