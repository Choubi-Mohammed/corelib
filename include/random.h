/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   random.h                                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/02 17:17:49 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/02 19:47:06 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#ifndef RANDOM_H
#include <string>
using namespace std;
#define RANDOM_H
int tt_random_int();
int tt_random_range(int from,int to);
char tt_random_char();
char tt_random_lower();
char tt_random_upper();
int tt_random_digit();
char tt_random_special();
string tt_generate_key();
string tt_generate_keys(int len);
#endif
