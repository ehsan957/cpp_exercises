#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num<2){
        cout << "It's NOT a prime number."<<endl;
    }
    else{
        int divisor = 2;
        while(divisor<num){
            if((num % divisor)==0){
                cout << "It's NOT a prime number."<<endl;
                return 0;
            }
            else{
                divisor++;
            }
        }
        cout << "It's a prime number."<<endl;
    }

    return 0;
}