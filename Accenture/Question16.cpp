/*
The function accepts a string str as its argument. The function needs to return thr transformed string by replacing all the occurences of the character 'a' with the character 'b' and vice versa.
*/

#include<iostream>
using namespace std;


string replacestr(string &str1) {
    int i = 0;
    int n = str1.length();
    while(i < n) {
        if(str1[i] == 'a') {
            str1[i] = 'b';
        }
        else if(str1[i] == 'b'){
            str1[i] = 'a';
        }
        i++;
    }

    return str1;
}

int main()
{
    string str1;
    cin >> str1;

    string result = replacestr(str1);
    cout << result;
}