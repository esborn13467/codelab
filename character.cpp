#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (is_prime(x)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
//