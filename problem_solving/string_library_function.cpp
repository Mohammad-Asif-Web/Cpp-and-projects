#include <cstring>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    // strlen() - finds length from a string
    char ch[] = "Asif";
    int len = strlen(ch);
    cout << "Length: " << len << endl;

    // strcpy() - copy a string. where we copy a string, that string variable must declare with storage size and put it empty; otherwise we will get error
    char cp[6];
    strcpy(cp, ch);
    cout << "Copy: " << cp << endl;

    // strcat - It is a concatanation. first variable take the second variable value.
    char con[] = "web";
    char cat[] = " developer";
    strcat(con,cat);
    cout << "String Concatenation is: " << con << endl;

    // strupr() -- It is string uppercase function.
    strupr(con);
    cout << "Uppercase of con: " << con << endl;

    // strlwr() -- It is string lowercase function
    strlwr(con);
    cout << "Lowecase of con: " << con << endl;

    // strcmp -- It makes comparision between two strings

    char a[] = "a is lower";
    char b[] = "b is lower";

    int val = strcmp(a, b);

    if(val == 0){
        cout << "strcmp ans: string are equal";
    }
    else{
        cout << "strcmp ans: they are not same";
    }







}