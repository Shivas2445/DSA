#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s; // Reads the string (e.g., "shivas")

    int hash[26] = {0}; // To store frequencies of lowercase letters

    for (char ch : s)
    {
        if (ch >= 'a' && ch <= 'z')
            hash[ch - 'a']++;
    }

    int q;
    cin >> q; // Number of queries

    while (q--)
    {
        char c;
        cin >> c;

        if (c >= 'a' && c <= 'z')
            cout << hash[c - 'a'] << endl;
        else
            cout << "Invalid character." << endl;
    }

    return 0;
}
