#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int recursiveBinarySearch(const vector<int> &numbers, int target, int left, int right)
{
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (numbers[mid] == target)
        return mid;
    else if (numbers[mid] < target)
        return recursiveBinarySearch(numbers, target, mid + 1, right);
    else
        return recursiveBinarySearch(numbers, target, left, mid - 1);
}

int main()
{
    vector<int> nums = {1, 2, 3, 5, 6, 9};
    sort(nums.begin(), nums.end());

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int index = recursiveBinarySearch(nums, target, 0, nums.size() - 1);

    if (index != -1)
        cout << "Target " << target << " found at index " << index << endl;
    else
        cout << "Target " << target << " not found in the array" << endl;

    return 0;
}