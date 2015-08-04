/**
 * Problem 1: Multiples of 3 and 5
 *
 * Problem description: If we list all of the natural numbers below 10 that
 * are multiples of 3 or 5, we get 3, 5, 6, and 9. The sum of these multiples
 * is 23. Find the sum of the multiples of 3 or 5 below 1000.
 *
 */

#include <iostream>
using namespace std;

int main() {
  // Declare variables
  int sum = 0;    // Holds sum of identified multiples

  // Iterate through all integers 1-1000
  //
  // Note: Technically, 0 can sometimes also be a natural number. However,
  // since 0 is neither a multiple of 3 nor 5, this quirk is negligible in
  // the context of this problem.
  for (int i = 1; i < 1000; i++) {
    // Check if number is a multiple of 3 or 5
    if (i % 3 == 0 || i % 5 == 0) {
      // Add number to sum
      sum += i;
    }
  }

  // Print out sum of multiples
  cout << "Answer: " << sum << endl;
}
