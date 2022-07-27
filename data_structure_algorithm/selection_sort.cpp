#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

void selection_sort(int a[], int n){
    int i, j, min_idx, temp;

    for(i = 0; i < n - 1; i++){
        min_idx = i;
        for(j = i + 1; j < n; j++){
            if(a[j] < a[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            temp = a[i];
            a[i] = a[min_idx];
            a[min_idx] = temp;
        }
    }
}
void printArr(int a[], int size){
    int i;
    for(i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main(){
    system("cls");
    // int a[] = {54, 32, 20, 34, 10, 3, 94};
    int a[5];
    // we are taking random array inputs from user
    cout << "Input random input for sorting array" << endl;
    for(int k = 0; k < sizeof(a) / sizeof(a[0]); k++){
        cin >> a[k];
    
    }
    int n = sizeof(a) / sizeof(a[0]);
    selection_sort(a, n);
    cout << "Sorted array: \n";
    printArr(a, n);
    return 0;
}


