// the linear search finds the desire output by index number.Linear search is a sequential searching algorithm where we start from one end and check every element of the list until the desired element is found.

#include <stdio.h>
#include <iostream>
using namespace std;

int search(int array[], int n, int x) {

  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
  int array[] = {2, 4, 0, 1, 9};
  int x = 1;
  int n = 6;

  int result = search(array, n, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
}

// this algorithm Time Complexity is O(n) - Beacause the loop is depend on n value.
// space complexity is O(1) - In the search function 3 arguments ar constant, so we don't calculate them. in for loop there is one int i. and it take space 4, whatever the value is. so space complexity is O(1)
