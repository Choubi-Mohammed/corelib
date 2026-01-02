/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   random.cpp                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/02 17:18:22 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/02 19:29:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "../../include/random.h"
using namespace std;
int tt_random_int()
{
	return (rand());
}
int tt_random_range(int from,int to)
{
	int random_int = tt_random_int() % (to - from + 1) + from;
	return random_int;
}
char tt_random_char()
{
	return (char) tt_random_range(33,126);
}

char tt_random_lower()
{
	return (char) (tt_random_range(97,122));
}
char tt_random_upper()
{
	return (char) (tt_random_range(65,90));
}
int tt_random_digit()
{
	return tt_random_range(0,9);
}

char tt_random_special()
{
	return (char) (tt_random_range(33,126));
}
char tt_random_special_safe()
{
	char random_sp;
	do
	{
		random_sp = tt_random_special();
	}while(random_sp == 39 || random_sp == 34 || random_sp == 96 || random_sp == 92 ||
	random_sp == 60 || random_sp == 62 || random_sp == 124 || random_sp == 123 ||
    random_sp == 125 || random_sp == 91 || random_sp == 93 || random_sp == 40 ||
    random_sp == 41 || random_sp == 59 || random_sp == 58 || random_sp == 126 ||
    random_sp == 63 || random_sp == 42 || random_sp == 47 || random_sp == 46 ||
	random_sp == 43 || random_sp == 44 || random_sp == 45 || random_sp == 61);
	return random_sp;
}
string tt_generate_key()
{
	string word = "";
	int i = 1;
	while(i <= 4)
	{
		int j = 1;
		while(j <= 4)
		{
			word = word + tt_random_special_safe();
			j++;
		}
		if(i != 4)
			word = word + '-';
		i++;
	}
	return word;
}
string tt_generate_keys(int len)
{
	int i = 1;
	while(i <= len)
	{
		return tt_generate_key();
		i++;
	}
	return "\0";
}
