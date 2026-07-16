#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number of elements." << endl;
        return 0;
    }

    vector<int> arr(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / n;

    cout << "Sum of the array elements: " << sum << endl;
    cout << "Average of the array elements: " << average << endl;

    // Divisibility check:
    // If sum % n is 0, the sum is exactly divisible by n, so the average is a whole number.
    // Otherwise, the remainder means the average has a fractional part.
    if (sum % n == 0) {
        cout << "The sum is exactly divisible by the number of elements." << endl;
    } else {
        cout << "The sum is not exactly divisible by the number of elements." << endl;
    }

    return 0;
}
