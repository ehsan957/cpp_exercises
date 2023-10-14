#include <iostream>

using namespace std;

int main() {
    int numbers[] = {2, 4, 6, 7, 11, 14};
    int odd, even = 0;
    for(int i=0; i<(sizeof(numbers)/sizeof(int)); i++){
        if((numbers[i] % 2) == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << "The count of odd numbers is: "<< odd << endl;
    cout << "The count of even numbers is: "<< even << endl;
    

    return 0;
}