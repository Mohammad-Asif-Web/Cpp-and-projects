/* Time Complexity depends on  some operations --
1. assignment operation ->  x = 10
2. comparision operatin -> a > b
3. mathmatical operation  -> a + b, a -b
4. function call and it's inside work -> function()
and include all the operations 
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

// 1. Time Complexity O(1)
// O(n) -> When the number of operations in the program does not depend on the input and the number of operations is constant, we call it O(n).if any problem has one assignment operation then the Time Complexity will be O(1). Example--
    int n1, n2, result1;
    n1 = 10;    // 1 assignment operation
    n2 = 20;    // 1 assignment operation
    result1 = n1 + n2;   // 2 assignment operation =, +
    cout << "result no 1: " << result1 <<endl; //using double endl for line space
    cout << endl;
    // we see that, there is 4 operations, but the Time complexity will be O(1). Because here operation is constant. No matter how much input value is. the operation does not depend on input values.


// 2. Time Complexity O(n) - The number of operations is proportional to N values
    int n3, result2;
    cout<< "Type O(1) Input_";
    // scanf("%d", &n);
    cin >> n3;
    result2 = n3 * (n3 + 1) / 2;    //here 1 assignment and 3 mathmatical operation = 4 operation
    cout << "result no 2: " << result2 << endl;
    cout << endl;
    //so the Time Complexity will be O(1). whaterver the n value is, the operation is constant here too.


    // now I will solve the same type problem in loop. the output will be linear type. But the Time Complexity will be same? what will be the complexity of this program? let's see.
    int i, n4, result3;
    cout << "type O(n) input_";
    cin >> n4;
    result3 = 0;
    for(i = 0; i <= n4; i++){
        result3 = result3 + 1;
        cout << "result no 3 = " << result3 << endl;
    }
    cout << endl;
    /*here we see that, if n value is 3, the loop will run 3 time and the operations will run 6 times. because there is two operations(=, +). 1 loop run = 2 operation run.
    if n = 1 operation = 2
    n = 5 operation = 10
    n = 10 operation = 20
    n is proportional to operation. so the operation is increasing by 2 times. so this 2 is constant we know and we can remove this 2. Now the complexity is O(n).
    */


// 3. Time Complexity O(n^2) -- The value of n will be the square of the number of operations
    int i2, j2, n5, count;
    cout << "Type O(n^2) input_";
    cin >> n5;
    count = 0;
    for(i2 = 0; i2 < n5; i2++){
        for(j2 = 0; j2 < n5; j2++){
            count = count + 1;
        }
    }
    cout << "----result no 4----" << endl;
    cout << "n = " << n5 << ", count = " << count << endl;
    cout << endl;
    /* for two loop operation
    if n = 1 , count = 1
    n = 2, count = 4
    n = 3, count = 9,
    n = 10, count = 100
    we see that, the value of count is increasing by 2 muliplying, which i n^2. so the Time Complexity will be O(n^2). when the two loop will be depend on same value(n), then we can call it O(n^2), otherwise it will be O(n). Because the operation numbers are constant, whatever it is 2, 3, 4 etc.
    */


// 4. Time Complexity O(n^3) -- think about loop, The number of loops depends on the value of n. if the loop is 3 times and the nth value is 3 times the Time Complexity will be O(n^3) and the each operation will run for 3 times. that's the main fact--
    int i3, j3, k3, n6, count2;
    cout << "Type O(n^3) input_";
    cin >> n6;
    for(i3 = 0; i3 < n6; i3++){
        for(j3 = 0; j3 < n6; j3++){
            for(k3 = 0; k3 < n6; k3++){
                count2 = count2 + 1;
            }
        }
    }
    cout << "----result no 5----" << endl;
    cout << "n = " << n6 << ", count = " << count2 << endl;
    // If we add another loop, the complexity will be O(n^4). Basically we don't use more complexity than O(n^3) in our program. So remember this. 
    return 0;
}

/*
how the Big O Increase?
O(1) - there no change in time by increasing input value. whatever the input value the time is same and operation will be same.

O(n) - The number of operations is proportional to N values. the operation and n will be same. so it will take equal time

O(n^2) -  The value of n will be the square of the number of operations. the operation numbers are multiply by 2 times.

O(n^3) - this operation numbers are multiply by 3 times of n value. Takes more time to run.

By mistake if you are using four nested loop, that mean's something is wrong and be carefull about that program.
dont't try to memorize this algorithm, always practice, do code, mind it and this is good practice.

*/



