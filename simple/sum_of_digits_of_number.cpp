#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int digit = 0;
    while((num / 10)>=1){
        digit += (num % 10);
        num = (num - (num % 10))/10;
    }
    digit += num;
    cout << "The sum of digits of this number is: " << digit << endl;
}