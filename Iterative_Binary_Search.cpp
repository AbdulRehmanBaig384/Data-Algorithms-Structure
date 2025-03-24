#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(const vector<int>& numbers, int target) {
    int left = 0, right = numbers.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (numbers[mid] == target)
            return mid;
        else if (numbers[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 2, 3, 5, 6, 9};
    sort(nums.begin(), nums.end());

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int index = binarySearch(nums, target);

    if (index != -1)
        cout << "Target " << target << " found at index " << index << endl;
    else
        cout << "Target " << target << " not found in the array" << endl;

    return 0;
}