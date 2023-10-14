#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. The number of elements must be greater than zero." << endl;
        return 1; // Exit with an error code
    }

    int arr[n];
    int sum = 0;

    cout << "Enter " << n << " integers, separated by spaces:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / n;

    cout << "The average of the integers is: " << average << endl;

    return 0;
}