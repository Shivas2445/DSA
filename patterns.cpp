#include <iostream>
using namespace std;

// Function prototypes
void pattern1(int a);
void pattern2(int a);
void pattern3(int a);
void pattern4(int a);
void pattern5(int a);
void pattern6(int a);
void pattern7(int a);
void pattern8(int a);
void pattern9(int a);

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cout << "Enter the size of the patterns: ";
        cin >> n;
        pattern1(n);
        pattern2(n);
        pattern3(n);
        pattern4(n);
        pattern5(n);
        pattern6(n);
        pattern7(n);
        //pattern8(n); // Uncomment if you want to print pattern8
        pattern9(n);
    }
    return 0;
}

// Pattern 1: Square of stars
void pattern1(int a) {
    cout << "Pattern 1" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cout << "*   ";
        }
        cout << endl;
    }
}

// Pattern 2: Left-aligned triangle of stars
void pattern2(int a) {
    cout << "Pattern 2" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 1; j <= i + 1; j++) {
            cout << "*   ";
        }
        cout << endl;
    }
}

// Pattern 3: Left-aligned triangle of numbers
void pattern3(int a) {
    cout << "Pattern 3" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 1; j <= i + 1; j++) {
            cout << j << "   ";
        }
        cout << endl;
    }
}

// Pattern 4: Left-aligned triangle of row numbers
void pattern4(int a) {
    cout << "Pattern 4" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 1; j <= i + 1; j++) {
            cout << i << "   ";
        }
        cout << endl;
    }
}

// Pattern 5: Inverted left-aligned triangle of stars
void pattern5(int a) {
    cout << "Pattern 5" << endl;
    for (int i = 1; i <= a; i++) {
        for (int j = 0; j < a - i + 1; j++) {
            cout << "*   ";
        }
        cout << endl;
    }
}

// Pattern 6: Inverted left-aligned triangle of numbers
void pattern6(int a) {
    cout << "Pattern 6" << endl;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a - i + 1; j++) {
            cout << j << "   ";
        }
        cout << endl;
    }
}

// Pattern 7: Pyramid of stars
void pattern7(int n) {
    cout << "Pattern 7" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

// Pattern 8: Inverted pyramid of stars (commented out in main)
void pattern8(int n) {
    cout << "Pattern 8" << endl;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << "   ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*  ";
        }
        for (int j = 0; j < n - i - 1; j++) {
            cout << "   ";
        }
        cout << endl;
    }
}

// Pattern 9: Inverted pyramid with spaces
void pattern9(int n) {
    cout << "Pattern 9" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++) {
            cout << "*";
        }
        for (int j = 0; j <= i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
