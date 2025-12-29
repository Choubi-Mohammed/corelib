/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   math.cpp                                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/29 19:21:50 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/29 19:56:05 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include "../../include/math.h"
using namespace std;

int tt_max(int nbr1,int nbr2)
{
	if(nbr1 > nbr2)
		return nbr1;
	else
		return nbr2;
}
float tt_max(float nbr1,float nbr2)
{
	if(nbr1 > nbr2)
		return nbr1;
	else
		return nbr2;
}
double tt_max(double nbr1,double nbr2)
{
	if(nbr1 > nbr2)
		return nbr1;
	else
		return nbr2;
}

int tt_min(int nbr1,int nbr2)
{
	if(nbr1 < nbr2)
		return nbr1;
	else
		return nbr2;
}
float tt_min(float nbr1,float nbr2)
{
	if(nbr1 < nbr2)
		return nbr1;
	else
		return nbr2;
}
double tt_min(double nbr1,double nbr2)
{
	if(nbr1 < nbr2)
		return nbr1;
	else
		return nbr2;
}

int tt_sum(int num1,int num2)
{
	return (num1 + num2);
}
float tt_sum(float num1,float num2)
{
	return (num1 + num2);
}
double tt_sum(double num1,double num2)
{
	return (num1 + num2);
}
float tt_avg(float sum,int nbr)
{
	return sum / nbr;
}
double tt_avg(double sum,int nbr)
{
	return sum / nbr;
}

int tt_pow(int base,int exp)
{
	if (exp == 0)
		return 1;
	int i = 1;
	int pow = 1;
	while(i <= exp)
	{
		pow = pow * base;
		i++;
	}
	return pow;
}
float tt_pow(float base,int exp)
{
	if (exp == 0)
		return 1;
	int i = 1;
	float pow = 1;
	while(i <= exp)
	{
		pow = pow * base;
		i++;
	}
	return pow;
}

int tt_sqrt(int nbr)
{
	int i = 1;
	while(i <= nbr/2)
	{
		if(tt_pow(i,2) == nbr)
			return i;
		i++;
	}
	return 0;
}

int tt_fact(int nbr)
{
	if(nbr == 0)
		return 1;
	int i = 1;
	int fact = 1;
	while(i <= nbr)
	{
		fact = fact * i;
		i++;
	}
	return fact;
}

