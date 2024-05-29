#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

bool is_palindrome(string s) {
    // Normalize the input string
    transform(s.begin(), s.end(), s.begin(), ::tolower); // Convert to lowercase
    s.erase(remove_if(s.begin(), s.end(), [](char c) { return !isalnum(c); }), s.end()); // Remove non-alphanumeric characters

    // Check if the normalized string is equal to its reverse
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (is_palindrome(s)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
