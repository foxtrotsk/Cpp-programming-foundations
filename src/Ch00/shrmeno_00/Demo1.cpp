#include<iostream>

using std::endl;
using std::cout;
using std::cin;

int main(){

    int num1, num2, result;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    result = num1 + num2;
    cout << "Result of addition of " << num1 << " and " << num2 << " is " << result <<endl;
    cout << endl << endl;
    return 0;
}
