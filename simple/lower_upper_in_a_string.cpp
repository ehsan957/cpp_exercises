#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int lower, upper = 0;
    for(int i=0; i<str.length();i++){
        char temp = str[i];
        if(temp<91 && temp>64){
            upper++;
        }
        if(temp<123 && temp>96){
            lower++;
        }        
    }
    cout << "The number of lowercase chars: " << lower << endl;
    cout << "The number of uppercase chars: " << upper << endl;
    return 0;
}