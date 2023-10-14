#include <iostream>

using namespace std;

int main() {
    int numbers[] = {12, 4, 0, 7, 6, 14, 1};
    //sort array
    for(int i=0; i<(sizeof(numbers)/sizeof(int))-1;i++){
        for(int j=i+1; j<(sizeof(numbers)/sizeof(int));j++){
            if(numbers[i]>numbers[j]){
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    //print sorted array
    for(int i=0; i<(sizeof(numbers)/sizeof(int));i++){
        cout << numbers[i] << " ";
    }

    return 0;
}