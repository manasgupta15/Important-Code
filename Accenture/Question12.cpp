/*
The function accepts two strings str1 and str2 as its argument. The function needs to return the index of the first occurence of substring str2 in str 1 or -1 if the substring is not found;
*/


#include<iostream>
using namespace std;

int found(string& str1 , string& str2) {
    int index = str1.find(str2);

    if(index != string::npos) {
        return index;
    }
    return -1;
}

int main()
{
    string str1;
    cout << "Enter the string 1" << endl;
    getline(cin,str1);

    string str2;
    cout << "Enter the string 2" << endl;
    getline(cin,str2);

    int result = found(str1, str2);

    cout << result;
    
}