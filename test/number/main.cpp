/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   main.cpp                                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/29 20:05:17 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/31 18:34:24 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../../include/number.h"
using namespace std;


int main() {
    // Test is_prime
    cout << "is_prime tests:" << endl;
    cout << "2: " << tt_is_prime(2) << endl;
    cout << "4: " << tt_is_prime(4) << endl;
    cout << "7: " << tt_is_prime(7) << endl;
    cout << "10: " << tt_is_prime(10) << endl;

    // Test even/odd
    cout << "\neven/odd tests:" << endl;
    for(int i = -2; i <= 2; i++) {
        cout << i << ": even=" << tt_is_even(i)
             << ", odd=" << tt_is_odd(i) << endl;
    }

    // Test abs
    cout << "\nabs tests:" << endl;
    cout << "abs(-5): " << tt_abs(-5) << endl;
    cout << "abs(5): " << tt_abs(5) << endl;

    // Test fraction
    cout << "\nfraction tests:" << endl;
    cout << "frac(3.14f): " << tt_get_fraction(3.14f) << endl;
    cout << "frac(3.14): " << tt_get_fraction(3.14) << endl;

    // Test round
    cout << "\nround tests:" << endl;
    cout << "round(3.4f): " << tt_round(3.4f) << endl;
    cout << "round(3.6f): " << tt_round(3.6f) << endl;

    // Test floor/ceil
    cout << "\nfloor/ceil tests:" << endl;
    float num = 3.7f;
    cout << num << ": floor=" << tt_floor(num)
         << ", ceil=" << tt_ceil(num) << endl;

    return 0;
}
