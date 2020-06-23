/*
** EPITECH PROJECT, 2019
** description file
** File description:
** describe
*/

#include "../include/104intersection.h"

void description(char *str)
{
    if (strcmp(str, "-h") == 0) {
        printf("USAGE\n");
        printf("./104intersection opt xp yp zp xv yv zv p\n\nDESCRIPTION\n");
        printf("    opt             surface option: 1 for a sphere, 2 for a");
        printf(" cylinder, 3 for a cone\n    (xp, yp, zp)    coordinates of a");
        printf("point by which the light ray passes through\n    (xv, yv, zv) ");
        printf("   coordinates of a vector parallel to the light ray\n    p             ");
        printf("  parameter: radius of the sphere, radius of the cylinder, or\n\t\t    ");
        printf("angle formed by the cone and the Z-axis\n");
    }
}
