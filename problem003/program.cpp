/**
 * Problem 3: Largest Prime Factor
 *
 * Problem descriptionum: The prime factors of 13195 are 5, 7, 13, and 29.
 * What is the largest prime factor of the number 600851475143?
 */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  // Declare variables
  //
  // Note: At first glance, it might seem appropriate to simply declare the
  // data type for the target number as int (integer). However, extremely
  // large numbers (such as the number we are using in this solution) can 
  // exceed the maximum integer value in C++. In this case, we must choose
  // another data type. For this problem, the long long type allows us to
  // create a variable that can hold the very large value we need.
  long long num = 600851475143;   // Holds value of target number

  // Divide number by 2 until it is odd
  while (num % 2 == 0) {
    num = num / 2;
  }

  // ???
  for (int i = 3; i <= sqrt(num); i += 2) {
    // Divide number by i until it is odd
    while (num % i == 0) {
      num = num / i;
    }
  }

  // Display answer
  cout << "Answer: " << num << endl;
}

