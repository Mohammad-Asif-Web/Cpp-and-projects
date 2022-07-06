#include<sstream>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;

// 1. Convert Decimal to Binary number
// int main()
// {
//  int num,arr[64];
// //  cin -- its take input from users. it uses to take number input. 
//  cin>>num;
//  int i=0,r;
//  while(num!=0)
// {
//   r = num%2; //if num is 0 it the loop stop. if num is even number it will return 0 and if num is odd number it will return 1
//   arr[i++] = r; //here the r value stores to arr[i]
//   num /= 2; // num = num / 2;
// }

// for(int j=i-1;j>=0;j--){
//  cout<<arr[j];
//   }
// }

// 2. An array contains binary numbers, find its decimal number.
// function definition
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
    }
}

int main() {
  long long n;
   cout << "Enter a binary number: ";
   cin >> n;
  cout << n << " in binary = " << convert(n) << " in decimal" << endl;
  return 0;
}


