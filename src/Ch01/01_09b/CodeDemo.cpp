#include<iostream>

using std::endl;
using std::cout;
using std::cin;
using std::string;

int main(){
    string name;
    // char name [15];

    cout << "Enter your name: " << endl;
    // cin will stop at newline / space character
    // to get name with spaces use getline
    // cin >> name;
    // cin.getline(name, 15);

    // If you are using string
    // You will have to use 
    // getline(cin, name) instead of cin.getline(name, 15)
    getline(cin, name);
    cout << "Hi " << name << " , How are you?" << endl;
    cout << endl << endl;
    return 0;
}