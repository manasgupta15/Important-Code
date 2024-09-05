/*

The function accepts a string str as its argument. The function needs to determine whether the string is a palindrome or not. A palindrome is a word or phrase that reads the same backward as forward.

*/



#include<iostream>
using namespace std;

bool palindrome(string& str) {

    int n = str.length();
    int i = 0;
    int j = n-1;

    while(i < j) {
        if(str[i] == str[j]) {
            i++;
            j--;
        }
        else {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;
    getline(cin,str);


    bool result = palindrome(str);

    if(result) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    
}