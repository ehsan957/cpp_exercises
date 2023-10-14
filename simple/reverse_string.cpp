#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    string reverse = "";
    for(int i=0; i<str.length(); i++){
        reverse = str[i]+reverse;
    }
    cout << "The reverse form of your string is: " << reverse << endl;
    return 0;
}