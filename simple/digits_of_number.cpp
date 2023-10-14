#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int digit = 1;
    while((num / 10)>=1){
        num = (num - (num % 10))/10;
        digit++;
    }
    cout << "The number of digits of this number is: " << digit << endl;
}