/*
** EPITECH PROJECT, 2019
** 104
** File description:
** 104intersection
*/

#include "../include/104intersection.h"

float my_round(float o)
{
    if (o > 0 && (o == 0 || ((o * 1000) < 1)))
        return (0);
    else if (o < 0 && (((-1) * o * 1000) < 1))
        return (0);
    else
        return (o);
}

int intersection_1(float xp, float yp, float zp, float xv, float yv, float zv, float p)
{
    float aer, lambda, gamma, teta, delta, alpha, alpha_prime, a, b, c, a_prime, b_prime, c_prime;
    lambda = my_round((pow(xv, 2) + pow(yv, 2) + pow(zv, 2)));
    gamma = my_round(((zp * zv) + (yp * yv) + (xp * xv)));
    teta = my_round((pow(xp, 2) + pow(yp, 2) + pow(zp, 2) - pow(p, 2)));
    delta = my_round(((pow((gamma), 2)) - (lambda * teta)) * 4);
    if (lambda == 0 && gamma == 0 && teta == 0) {
        printf("There is an infinite number of intersection points.\n");
	exit (0);
    }
    else if (delta == 0) {
        alpha = ((-1) * (gamma / lambda));
	a = my_round((xv * alpha) + xp);
	b = my_round((yv * alpha) + yp);
	c = my_round((zv * alpha) + zp);
	printf("1 intersection point:\n(%.3f, %.3f, %.3f)\n", a, b, c);
	exit (0);
    }
    else if (delta < 0) {
        printf("No intersection point.\n");
	exit (0);
    }
    else if (delta > 0) {
        alpha = ((((2 * gamma) + sqrt(delta)) / (2 * lambda)) * (-1));
	alpha_prime = ((((2 * gamma * (-1)) + sqrt(delta)) / (2 * lambda)));
	a = my_round((xv * alpha) + xp);
	b = my_round((yv * alpha) + yp);
	c = my_round((zv * alpha) + zp);
	a_prime = my_round((xv * alpha_prime) + xp);
	b_prime = my_round((yv * alpha_prime) + yp);
	c_prime = my_round((zv * alpha_prime) + zp);
	printf("2 intersection points:\n(%.3f, %.3f, %.3f)\n(%.3f, %.3f, %.3f)\n", a_prime, b_prime, c_prime, a, b, c);
	exit (0);
    }
}

int intersection_2(float xp, float yp, float zp, float xv, float yv, float zv, float p)
{
    float aer, lambda, gamma, teta, delta, alpha, alpha_prime, a, b, c, a_prime, b_prime, c_prime;
    lambda = my_round((pow(xv, 2) + pow(yv, 2)));
    gamma = my_round(((yp * yv) + (xp * xv)));
    teta = my_round((pow(xp, 2) + pow(yp, 2) - pow(p, 2)));
    delta = my_round(((pow((gamma), 2)) - (lambda * teta)) * 4);
    if (lambda == 0 && gamma == 0 && teta == 0) {
        printf("There is an infinite number of intersection points.\n");
	exit (0);
    }
    else if (lambda == 0 && teta != 0) {
        printf("No intersection point.\n");
	exit (0);
    }
    else if (delta == 0) {
        alpha = ((-1) * (gamma / lambda));
	a = my_round((xv * alpha) + xp);
	b = my_round((yv * alpha) + yp);
	c = my_round((zv * alpha) + zp);
	printf("1 intersection point:\n(%.3f, %.3f, %.3f)\n", a, b, c);
	exit (0);
    }
    else if (delta < 0) {
        printf("No intersection point.\n");
	exit (0);
    }
    else if (delta > 0) {
        alpha = ((((2 * gamma) + sqrt(delta)) / (2 * lambda)) * (-1));
	alpha_prime = ((((2 * gamma * (-1)) + sqrt(delta)) / (2 * lambda)));
	a = my_round((xv * alpha) + xp);
	b = my_round((yv * alpha) + yp);
	c = my_round((zv * alpha) + zp);
	a_prime = my_round((xv * alpha_prime) + xp);
	b_prime = my_round((yv * alpha_prime) + yp);
	c_prime = my_round((zv * alpha_prime) + zp);
	printf("2 intersection points:\n(%.3f, %.3f, %.3f)\n(%.3f, %.3f, %.3f)\n", a_prime, b_prime, c_prime, a, b, c);
	exit (0);
    }
}

int intersection_3(float xp, float yp, float zp, float xv, float yv, float zv, float p)
{
    float aer, lambda, gamma, teta, delta, alpha, alpha_prime, a, b, c, a_prime, b_prime, c_prime;
    p = (M_PI * p) / 180;
    lambda = my_round((pow(xv, 2) + pow(yv, 2) - pow((tan(p) * zv), 2)));
    aer = my_round((pow(tan(p), 2) * zp * zv));
    gamma = my_round(((yp * yv) + (xp * xv) - aer));
    teta = my_round((pow(xp, 2) + pow(yp, 2) - pow((tan(p) * zp), 2)));
    delta = my_round(((pow((gamma), 2)) - (lambda * teta)) * 4);
    if (lambda == 0 && gamma != 0 && teta != 0) {
        alpha = ((-1) * (teta / gamma));
	a = my_round((xv * alpha) + xp);
	b = my_round((yv * alpha) + yp);
	c = my_round((zv * alpha) + zp);
	printf("1 intersection point:\n(%.3f, %.3f, %.3f)\n", a, b, c);
	exit (0);
    }
    if (lambda == 0 && gamma == 0 && teta != 0) {
        printf("No intersection point.\n");
	exit (0);
    }
    if (lambda == 0 && gamma == 0 && teta == 0) {
        printf("There is an infinite number of intersection points.\n");
	exit (0);
    }
    if (lambda == 0 && gamma != 0 && teta == 0) {
        printf("1 intersection point:\n(%.3f, %.3f, %.3f)\n", xp, yp, zp);
        exit (0);
    }
    if (delta == 0) {
        alpha = ((-1) * (gamma / lambda));
	a = my_round((xv * alpha) + xp);
	b = my_round((yv * alpha) + yp);
	c = my_round((zv * alpha) + zp);
	printf("1 intersection point:\n(%.3f, %.3f, %.3f)\n", a, b, c);
	exit (0);
    }
    if (delta < 0) {
        printf("No intersection point.\n");
	exit (0);
    }
    if (delta > 0) {
        alpha = ((((2 * gamma) + sqrt(delta)) / (2 * lambda)) * (-1));
	alpha_prime = ((((2 * gamma * (-1)) + sqrt(delta)) / (2 * lambda)));
	a = my_round((xv * alpha) + xp);
	b = my_round((yv * alpha) + yp);
	c = my_round((zv * alpha) + zp);
	a_prime = my_round((xv * alpha_prime) + xp);
	b_prime = my_round((yv * alpha_prime) + yp);
	c_prime = my_round((zv * alpha_prime) + zp);
	printf("2 intersection points:\n(%.3f, %.3f, %.3f)\n(%.3f, %.3f, %.3f)\n", a_prime, b_prime, c_prime, a, b, c);
	exit (0);
    }
}

int inter(char *opt, char *xp, char *yp, char *zp, char *xv, char *yv, char *zv, char *p)
{
    if (atof(xv) == 0 && atof(yv) == 0 && atof(zv) == 0)
        exit (84);
    if (opt[0] == '1') {
        if (atof(p) < 0)
            exit (84);
        printf("Sphere of radius %s\nLine passing through the point (%s, %s, %s) and parallel to the vector (%s, %s, %s)\n", p, xp, yp, zp, xv, yv, zv);
        intersection_1(atof(xp), atof(yp), atof(zp), atof(xv), atof(yv), atof(zv), atof(p));
        return (0);
    }
    if (opt[0] == '2') {
        if (atof(p) < 0)
            exit (84);
        printf("Cylinder of radius %s\nLine passing through the point (%s, %s, %s) and parallel to the vector (%s, %s, %s)\n", p, xp, yp, zp, xv, yv, zv);
        intersection_2(atof(xp), atof(yp), atof(zp), atof(xv), atof(yv), atof(zv), atof(p));
        return (0);
    }
    if (opt[0] == '3') {
        if (atof(p) < 0 || atof(p) > 90)
            exit (84);
        printf("Cone with a %s degree angle\nLine passing through the point (%s, %s, %s) and parallel to the vector (%s, %s, %s)\n", p, xp, yp, zp, xv, yv, zv);
        intersection_3(atof(xp), atof(yp), atof(zp), atof(xv), atof(yv), atof(zv), atof(p));
        return (0);
    }
    exit (84);
}
