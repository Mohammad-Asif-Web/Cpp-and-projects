/*
            Space Complexity Or Memory Complexity
                               _
low                           / \                   High
!                           /    \                     !
!                         /       \                    ! 
!                       / Register \                   !
!                     /-------------\                  !
!                   /  Case Level 1  \                 !
!  capacity       /-------------------\         speed  !
!               /     Cash Level 2     \               !
!             /-------------------------\              !
!           /            Ram             \             !
!         /-------------------------------\            !
!       /          Virtual Memory          \           !
High  /-------------------------------------\        Low
*/

/*register, case level 1, cash level 2 stays in the processor
Ram - external memory
virtual memory - Hard disk
always we try to run the program into ram. but when ram has not much space the program data store into virtual memory

we know that, we have to run multiple program in our operating system. That's why memory is very valuable for program. So our goal should be to have less memory in the program. So space complexity is so important for any program.

*/
// space complexity O(n^2)
#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int i, j, n;
    int a[5][5], b[5][5], s[5][5];
    // when use multi dimensional array, must declare their array size, otherwise error will throw
    cout << "input n_";
    cin >> n;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            s[i][j] = a[i][j] + b[i][j];
            cout << "s[i][j] = " << s[i][j] << endl;
        }
        
    }
     

    return 0;
}

