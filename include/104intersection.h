/*
** EPITECH PROJECT, 2019
** 104intersection.h
** File description:
** 104intersection.h
*/

#ifndef _104intersection_H_
#define _104intersection_H_

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int intersection(float opt, float xp, float yp, float zp, float xv, float yv, float zv, float p);
int inter(char *opt, char *xp, char *yp, char *zp, char *xv, char *yv, char *zv, char *p);
int my_strlen(char const *str);
int error_case(char *ave);
int my_strcmp(char const *s1, char const *s2);
void description(char *str);

#endif
