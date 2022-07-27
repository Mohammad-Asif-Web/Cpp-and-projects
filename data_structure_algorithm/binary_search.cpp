// Binary Search in C++
// Binary search is fast than linear. It divided the number from middle and search it. when using binary search always the number must be sorted.

#include <iostream>
using namespace std;

int binary(int arr[], int x, int low, int high){
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if(arr[mid] == x){
      return mid;
    }
    if(arr[mid] < x){
      low = mid + 1;
    }
    else{
      high = mid - 1;
    }
  }
  return -1;
  
}

int main(void){
  system("cls");
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int x = 5;
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = binary(arr, x, 0, n-1);

  if(result == -1){
    cout << "element not found";
  }
  else{
    cout << "element found on " << result;
  }
}