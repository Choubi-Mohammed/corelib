/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   test.cpp                                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/02 19:32:55 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/02 19:51:30 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../../include/random.h"
using namespace std;


int main()
{
	srand((unsigned)time(NULL));
    cout << "=== Random Function Demonstrations ===\n" << endl;

    // 1. Generate a random integer
    cout << "1. Random integer: " << tt_random_int() << endl;

    // 2. Generate random integer within a range
    cout << "2. Random number between 1 and 100: " << tt_random_range(1, 100) << endl;

    // 3. Generate a random character
    cout << "3. Random character: " << tt_random_char() << endl;

    // 4. Generate a random lowercase letter
    cout << "4. Random lowercase: " << tt_random_lower() << endl;

    // 5. Generate a random uppercase letter
    cout << "5. Random uppercase: " << tt_random_upper() << endl;

    // 6. Generate a random digit
    cout << "6. Random digit: " << tt_random_digit() << endl;

    // 7. Generate a random special character
    cout << "7. Random special character: " << tt_random_special() << endl;

    // 8. Generate a key
    cout << "8. Generated key: " << tt_generate_key() << endl;

    // 9. Generate keys of specific length ()
    cout << "9. Generated keys (length 4): " <<endl;
	for(int i = 1;i <= 5;i++)
		cout << tt_generate_keys(5) << endl;

    // Additional demonstration: multiple values
    cout << "\n=== Multiple Random Values ===\n" << endl;

    cout << "10 random numbers between 10 and 20: ";
    for (int i = 0; i < 10; i++) {
        cout << tt_random_range(10, 20) << " ";
    }
    cout << endl;

    cout << "10 random lowercase letters: ";
    for (int i = 0; i < 10; i++) {
        cout << tt_random_lower() << " ";
    }
    cout << endl;

    cout << "5 generated keys: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "  Key " << i+1 << ": " << tt_generate_key() << endl;
    }

    return 0;
}
