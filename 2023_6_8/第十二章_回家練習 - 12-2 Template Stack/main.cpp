#include "stack.h"
using namespace std;
int main()
{
    Stack<char> stack;
    string x;
    int count=0,fmath,emath,result=0;
    char mmath;
    stringstream ss;
    getline(cin, x);
    ss << x;
    while (!ss.eof()) {
        char thing;
        ss >> thing;
        stack.push(thing);
    }
    stack.pop();

    while (stack.getSize()-1) {
        fmath = stack.pop()-48;
        mmath = stack.pop();
        emath = stack.pop()-48;
        switch (mmath){
            case '+':
                result = emath + fmath;
                break;
            case '-':
                result = emath - fmath;
                break;
            case '*':
                result = emath * fmath;
                break;
            case '/':
                result = emath / fmath;
                break;
        }
        cout << result << endl;
        stack.push(result+48);
        result = 0;
    }
    return 0;
}