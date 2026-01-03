/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   main.cpp                                               |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/01/03 12:58:31 by shobeedev               shobee4ever      */
/*   Updated: 2026/01/03 13:35:22 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../../include/array.h"
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    int dest[SIZE];
    int result[SIZE];

    cout << "=== Testing Array Functions ===\n\n";

    // 1. Fill array with random values
    cout << "1. Filling array with random values:\n";
    tt_array_fill_random(arr, SIZE);
    tt_print_arr(arr, SIZE);
    cout << endl;

    // 2. Find max and min
    cout << "2. Max value: " << tt_array_max(arr, SIZE) << endl;
    cout << "   Min value: " << tt_array_min(arr, SIZE) << endl << endl;

    // 3. Calculate sum and average
    cout << "3. Sum of array: " << tt_array_sum(arr, SIZE) << endl;
    cout << "   Average: " << tt_array_average(arr, SIZE) << endl << endl;

    // 4. Copy array
    cout << "4. Copying array to destination:\n";
    tt_array_copy(arr, dest, SIZE);
    cout << "   Original: ";
    tt_print_arr(arr, SIZE);
    cout << "   Copy:     ";
    tt_print_arr(dest, SIZE);
    cout << endl;

    // 5. Reverse array
    cout << "5. Reversing array:\n";
    cout << "   Original: ";
    tt_print_arr(arr, SIZE);
    tt_array_reverse(arr, SIZE);
    cout << "   Reversed: ";
    tt_print_arr(arr, SIZE);
    tt_array_reverse(arr, SIZE); // Restore original order
    cout << endl;

    // 6. Shuffle array
    cout << "6. Shuffling array:\n";
    cout << "   Original: ";
    tt_print_arr(arr, SIZE);
    tt_array_shuffle(arr, SIZE);
    cout << "   Shuffled: ";
    tt_print_arr(arr, SIZE);
    cout << endl;

    // 7. Find element
    int target = arr[SIZE/2]; // Pick middle element
    cout << "7. Searching for value " << target << ":\n";
    int index = tt_array_find(arr, SIZE, target);
    cout << "   Found at index: " << index << endl << endl;

    // 8. Check if array contains value
    cout << "8. Does array contain " << target << "? ";
    cout << (tt_array_contains(arr, SIZE, target) ? "Yes" : "No") << endl << endl;

    // 9. Count even and odd numbers
    cout << "9. Even numbers count: " << tt_array_count_even(arr, SIZE) << endl;
    cout << "   Odd numbers count:  " << tt_array_count_odd(arr, SIZE) << endl << endl;

    // 10. Count positive and negative numbers
    cout << "10. Positive numbers count: " << tt_array_count_positive(arr, SIZE) << endl;
    cout << "    Negative numbers count: " << tt_array_count_negative(arr, SIZE) << endl << endl;

    // 11. Count distinct values
    cout << "11. Distinct values count: " << tt_array_distinct(arr, SIZE) << endl << endl;

    // 12. Check if array is palindrome
    int palindrome_arr[] = {1, 2, 3, 2, 1};
    cout << "12. Is {1,2,3,2,1} a palindrome? ";
    cout << (tt_array_is_palindrome(palindrome_arr, 5) ? "Yes" : "No") << endl << endl;

    // 13. Copy odd numbers
    int test_arr[] = {22, 16, 84, 87, 36, 94, 78, 87, 93, 50};
	int result1[10];
	int count = tt_array_copy_odds(test_arr, result1, 10);
	cout << "Count: " << count << endl;
	cout << "Odd numbers: ";
	for(int i = 0; i < count; i++) {
	    cout << result1[i] << " ";
	}
	cout << endl << endl;

    // 14. Copy prime numbers
    cout << "14. Copying prime numbers:\n";
    int prime_count = tt_array_copy_primes(arr, result, SIZE);
    cout << "   Found " << prime_count << " prime numbers: ";
    for(int i = 0; i < prime_count; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    cout << "\n=== Test Complete ===" << endl;

    return 0;
}
