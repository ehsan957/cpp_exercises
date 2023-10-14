#include <iostream>

using namespace std;

int fibo(int a){
    if(a==1){
        return 0;
    }
    else if(a==2){
        return 1;
    }
    else{
        return fibo(a-1)+fibo(a-2);
    }
}

int main() {
    int num;
    cout << "Enter the length of fibonacci sequence: ";
    cin >> num;
    for(int i=1; i<= num; i++){
        cout<<fibo(i)<<" ";
    }
    return 0;
}