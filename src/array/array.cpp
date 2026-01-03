/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   array.cpp                                              |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/03 10:39:41 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/03 12:54:39 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/random.h"
#include "../../include/array.h"
#include "../../include/number.h"
#include <iostream>
using namespace std;

void tt_array_fill_random(int arr[],int len)
{
	int i = 0;
	while(i < len)
	{
		arr[i] = tt_random_range(1,100);
		i++;
	}
}

int tt_array_max(int arr[],int len)
{
	int i = 0;
	int max = 0;
	while(i < len)
	{
		if(arr[i] > max)
			max = arr[i];
		i++;
	}
	return max;
}

int tt_array_min(int arr[],int len)
{
	int i = 0;
	int min = 0;
	while(i < len)
	{
		if(arr[i] < min)
			min = arr[i];
		i++;
	}
	return min;
}

int tt_array_sum(int arr[],int len)
{
	int i = 0;
	int sum = 0;
	while(i < len)
	{
		sum = sum + arr[i];
		i++;
	}
	return sum;
}

float tt_array_average(int arr[],int len)
{
	int sum_arr = tt_array_sum(arr,len);
	float avg = sum_arr / len;
	return avg;
}

void tt_array_copy(int src[],int dest[],int len)
{
	int i = 0;
	while(i < len)
	{
		dest[i] = src[i];
		i++;
	}
}

void tt_array_reverse(int arr[],int len)
{
	int i = 0;
	while(i <= len/2)
	{
		tt_swap_nbr(arr[i],arr[len-i- 1]);
		i++;
	}
}
void tt_array_shuffle(int arr[],int len)
{
	int i = 0;
	while(i < len)
	{
		int j = tt_random_range(0,len-i-1);
		tt_swap_nbr(arr[i],arr[j]);
		i++;
	}
}

int tt_array_find(int arr[],int len,int target)
{
	int i = 0;
	while(i < len)
	{
		if(arr[i] == target)
			return i;
		i++;
	}
	return -1;
}
bool tt_array_contains(int arr[],int len,int target)
{
	bool res = tt_array_find(arr,len,target) == -1 ? false : true;
	return res;
}
int tt_array_count_even(int arr[],int len)
{
	int i =0;
	int counter = 0;
	while(i < len)
	{
		if(arr[i] % 2 == 0)
			counter++;
		i++;
	}
	return counter;
}
int tt_array_count_odd(int arr[],int len)
{
	int i = 0;
	int counter = 0;
	while(i < len)
	{
		if (arr[i] % 2 != 0)
			counter++;
		i++;
	}
	return counter;
}

int tt_array_count_positive(int arr[],int len)
{
	int i = 0;
	int counter = 0;
	while (i < len)
	{
		if(arr[i] > 0)
			counter++;
		i++;
	}
	return counter;
}

int tt_array_count_negative(int arr[],int len)
{
	int i = 0;
	int counter = 0;
	while(i < len)
	{
		if (arr[i] < 0)
			counter++;
		i++;
	}
	return counter;
}
int tt_array_distinct(int arr[],int len)
{
	int i = 0;
	int j = 0;
	while(i < len)
	{
		if(tt_array_contains(arr,i,arr[i]) == false)
		{
			arr[j] = arr[i];
			j++;
		}
		i++;
	}
	return j;
}

bool tt_array_is_palindrome(int arr[],int len)
{
	int i = 0;
	while(i <= len/2)
	{
		if(arr[i] 1 != arr[len-i-1])
			return false;
		i++;
	}
	return true;
}

int tt_array_copy_odds(int src[],int dest[],int len)
{
	int i = 0;
	int j = 0;
	while(i < len)
	{
		if (src[i] % 2 != 0)
		{
			dest[j] = src[i];
			j++;
		}
		i++;
	}
	return j;
}
int ttcl_array_copy_primes(int src[],int dest[],int len)
{
	int i = 0;
	int j = 0;
	while(i < len)
	{
		if (tt_is_prime(src[i]) == true)
		{
			dest[j] = src[i];
			j++;
		}
		i++;
	}
	return j;
}
void tt_print_arr(int arr[],int len)
{
	int i = 0;
	while(i < len)
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << endl;
}
