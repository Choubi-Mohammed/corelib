/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   number.cpp                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/29 17:38:04 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/29 18:44:54 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include "../../include/number.h"
using namespace std;

bool tt_is_prime(int nbr)
{
	if(nbr <= 1)
		return false;
	int counter = 2;
	while(counter < nbr)
	{
		if(nbr % counter == 0)
			return false;
		counter++;
	}
	return true;
}

bool tt_is_even(int nbr)
{
	bool is_even = nbr % 2 == 0 ? true : false;
	return is_even;
}

bool tt_is_odd(int nbr)
{
	return !tt_is_even(nbr);
}

int tt_abs(int nbr)
{
	int res = nbr < 0 ? -(nbr) : nbr;
	return res;
}

float tt_abs(float nbr)
{
	float res = nbr < 0 ? -(nbr) : nbr;
	return res;
}

double tt_abs(double nbr)
{
	double res = nbr < 0 ? -(nbr) : nbr;
	return res;
}

float tt_get_fraction(float nbr)
{
	float res = nbr - (int)nbr;
	return (float)res;
}

double tt_get_fraction(double nbr)
{
	double res = nbr - (int)nbr;
	return (double)res;
}

float tt_round(float nbr)
{
	int intPart = (int)nbr;
	float fraction = tt_get_fraction(nbr);

	if(tt_abs(fraction) >= .5)
	{
		if(nbr > 0)
			return ++intPart;
		else
			return --intPart;
	}else
	{
		return intPart;
	}
}

double tt_round(double nbr)
{
	int intPart = (int) nbr;
	double fraction = tt_get_fraction(nbr);

	if(tt_abs(fraction) >= .5)
	{
		if(nbr > 0)
			return ++intPart;
		else
			return --intPart;
	}else
	{
		return intPart;
	}
}

float tt_floor(float nbr)
{
	return (int) nbr;
}

double tt_floor(double nbr)
{
	return (int) nbr;
}

float tt_ceil(float nbr)
{
	int intPart = (int)nbr;
	int res = nbr > 0 ? ++nbr : --nbr;
	return res;
}

double tt_ceil(double nbr)
{
	int intPart = (int)nbr;
	int res = nbr > 0 ? ++nbr : --nbr;
	return res;
}


