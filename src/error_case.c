/*
** EPITECH PROJECT, 2019
** error_case
** File description:
** error_case
*/

#include "../include/104intersection.h"

int error_case(char *ave)
{
    int i = 1, j = 0, g = 0, k = 0, s = 0, q = 0;
    for (; (((ave[j] >= '0' && ave[j] <= '9') || ave[j] == '.' || ave[j] == '-' || ave[j] == '+') && ave[j] != '\0'); j++, g++) {
        k += (ave[j] == '.') ? 1 : 0;
        s += (ave[j] == '-') ? 1 : 0;
        q += (ave[j] == '+') ? 1 : 0;
        g++;
    }
    if ((g != strlen(ave)) || (s == 1 && q == 1) || (k > 1 || s > 1 || q > 1))
        return (84);
    return (0);
}
