#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Function to count digits
void count_digit(int number) {
    int count = 0;
    int original = number;

    while (number > 0) {
        number /= 10;
        count++;
    }

    cout << "Size of the number " << original << " is: " << count << endl;
}

// Function to reverse number with overflow check
int reverse_num(int number) {
    int rev = 0;
    while (number > 0) {
        if (rev > INT_MAX / 10) return 0; // Overflow check
        rev = rev * 10 + (number % 10);
        number /= 10;
    }
    return rev;
}

// Function to check if a number is Armstrong
bool amstrong_num(int number) {
    int ld, sum = 0, temp = number;
    while (temp > 0) {
        ld = temp % 10;
        sum += (ld * ld * ld);
        temp /= 10;
    }
    return (sum == number);
}

// Function to find all divisors
int* printDivisors(int n, int& size) {
    vector<int> divisors;

    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    size = divisors.size();
    int* result = new int[size];
    for (int i = 0; i < size; ++i) {
        result[i] = divisors[i];
    }

    return result;
}

// Main function
int main() {
    int n;
    cout << "How many input numbers are you going to give? ";
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter input number " << (i + 1) << ": ";
        cin >> a[i];

        count_digit(a[i]);

        cout << "Reversed number: " << reverse_num(a[i]) << endl;

        cout << "Armstrong Number: ";
        if (amstrong_num(a[i])) cout << "Yes";
        else cout << "No";
        cout << endl;

        int size;
        int* divisors = printDivisors(a[i], size);
        cout << "Divisors: ";
        for (int j = 0; j < size; ++j) {
            cout << divisors[j] << " ";
        }
        cout << endl;
        delete[] divisors; // Free dynamically allocated memory

        cout << "-----------------------------" << endl;
    }

    return 0;
}
