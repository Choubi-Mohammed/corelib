/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   main.cpp                                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/31 18:41:44 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/31 18:42:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../../include/math.h"
using namespace std;

// Your function prototypes here...

int main() {
    cout << "=== Testing tt_max ===" << endl;
    cout << "max(5, 10) = " << tt_max(5, 10) << endl;
    cout << "max(3.14f, 2.71f) = " << tt_max(3.14f, 2.71f) << endl;
    cout << "max(10.5, 5.5) = " << tt_max(10.5, 5.5) << endl;

    cout << "\n=== Testing tt_min ===" << endl;
    cout << "min(5, 10) = " << tt_min(5, 10) << endl;
    cout << "min(3.14f, 2.71f) = " << tt_min(3.14f, 2.71f) << endl;
    cout << "min(10.5, 5.5) = " << tt_min(10.5, 5.5) << endl;

    cout << "\n=== Testing tt_sum ===" << endl;
    cout << "sum(5, 10) = " << tt_sum(5, 10) << endl;
    cout << "sum(3.14f, 2.71f) = " << tt_sum(3.14f, 2.71f) << endl;
    cout << "sum(10.5, 5.5) = " << tt_sum(10.5, 5.5) << endl;

    cout << "\n=== Testing tt_avg ===" << endl;
    cout << "avg(15.0f, 2) = " << tt_avg(15.0f, 2) << endl;
    cout << "avg(16.0, 4) = " << tt_avg(16.0, 4) << endl;

    cout << "\n=== Testing tt_pow ===" << endl;
    cout << "pow(2, 3) = " << tt_pow(2, 3) << endl;
    cout << "pow(2.5f, 3) = " << tt_pow(2.5f, 3) << endl;

    cout << "\n=== Testing tt_sqrt ===" << endl;
    cout << "sqrt(16) = " << tt_sqrt(16) << endl;
    cout << "sqrt(25) = " << tt_sqrt(25) << endl;

    cout << "\n=== Testing tt_fact ===" << endl;
    cout << "fact(5) = " << tt_fact(5) << endl;
    cout << "fact(6) = " << tt_fact(6) << endl;

    return 0;
}
