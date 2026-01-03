/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   array.h                                                |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/03 10:40:20 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/03 12:54:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H
void tt_array_fill_random(int arr[],int len);
int tt_array_max(int arr[],int len);
int tt_array_min(int arr[],int len);
int tt_array_sum(int arr[],int len);
float tt_array_average(int arr[],int len);
void tt_array_copy(int src[],int dest[],int len);
void tt_array_reverse(int arr[],int len);
void tt_array_shuffle(int arr[],int len);
int tt_array_find(int arr[],int len,int target);
bool tt_array_contains(int arr[],int len,int target);
int tt_array_count_even(int arr[],int len);
int tt_array_count_odd(int arr[],int len);
int tt_array_count_positive(int arr[],int len);
int tt_array_count_negative(int arr[],int len);
int tt_array_distinct(int arr[],int len);
bool tt_array_is_palindrome(int arr[],int len);
int tt_array_copy_odds(int src[],int dest[],int len);
int tt_array_copy_primes(int src[],int dest[],int len);
void tt_print_arr(int arr[],int len);
#endif
