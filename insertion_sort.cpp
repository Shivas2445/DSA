#include <iostream>
using namespace std;

// Function to perform insertion sort
void insertion_sort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int current = a[i];     // The element to insert
        int j = i - 1;

        // Shift larger elements to the right
        while (j >= 0 && a[j] > current) {
            a[j + 1] = a[j];    // Move element one step right
            j--;
        }

        a[j + 1] = current;     // Place current in the correct spot
    }
}

int main() {
    int n, a[100];

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Input array elements
    }

    insertion_sort(a, n); // Sort the array

    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
