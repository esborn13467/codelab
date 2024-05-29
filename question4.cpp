#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> find_duplicates(vector<int>& nums) {
    vector<int> duplicates;
    set<int> seen;
    for (int num : nums) {
        if (seen.count(num)) {
            duplicates.push_back(num);
        } else {
            seen.insert(num);
        }
    }
    return duplicates;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> duplicates = find_duplicates(nums);

    cout << "Duplicates: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl; // Output: 2 3

    return 0;
}