/*
 * =====================================================================================
 *
 *       Filename:  source.c
 *
 *    Description:  famous conjecture, called the Goldbach conjecture,
 *                  says that every even integer n greater than 2 has 
 *                  the property that it is the sum of two prime numbers
 * 
 *
 *
 *        Version:  1.0
 *        Created:  11/07/2015 21:51:45
 *       Compiler:  gcc
 *
 *         Author:  Roman - Abdulrahman Alshehri, aalshehri@umassd.edu
 *
 * =====================================================================================
 */

#ifndef SOURSE_H
#define SOURSE_H

#include <stdio.h>
#include <stdlib.h>

#define START 700
#define FINISH 1100


int isPrime(int num, int div);
int isGC(int n1, int n2);
void conjecture();
int conjRec(int i, int j);

#endif /* SOURSE_H */

