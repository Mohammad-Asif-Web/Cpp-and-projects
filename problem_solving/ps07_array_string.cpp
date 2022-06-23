
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    // Problem 1: Print single word from a string
    
    // string is a single    
    // gets() takes big inputs for string
    // stringstream operate string. as I put a string variable name 'line' to stringsteam as ss name.
    char line[100];
    cout <<"enter words of line: ";
    gets(line);
    istringstream ss(line);
    string subs;
    // the result will be each word
    while(ss >> subs)
    {
        cout << "Substring: " << subs << endl;
        // endl = it uses for new line
    }

    //Problem 2: print single letter from a string
    // char is a string type array. take it print by single character
    char abc[20];
    cout <<"Enter words of abc: ";
    gets(abc);
    istringstream ab(abc);
    char test;
    // the result will be each letter
    while(ab >> test){
        cout << "abc single letter: " << test << endl;
    }


  
}




