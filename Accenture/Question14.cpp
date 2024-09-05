#include<iostream>
using namespace std;

int OperationChoices(int c, int a, int b) {
    if(c == 1) {
        return a + b;
    }
    else if(c == 2) {
        return a-b;
    }
    else if(c == 3) {
        return a * b;
    }
    else if(c == 4) {
        return a/b;
    }
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    int result = OperationChoices(c,a,b);

    cout << result;
}