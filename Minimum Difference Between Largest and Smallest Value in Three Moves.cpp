#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

void arrayBuilderfun(vector<int>& nums) {
    int n = nums.size();
    cout << "Enter the array values: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
}

void displayArray(const vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int minDifference(vector<int>& nums) {
    int n = nums.size();

    // Special condition: if the array size is 4 or less
    if (n <= 4) {
        return 0;
    }

    sort(nums.begin(), nums.end());

    int ans = 0;

    for (int i = 0; i <= 3; i++) {

        ans = min(ans, nums[n - 4 + i] - nums[i]);
        
    }

    return ans;
}

int main() {
    int input;
    cout << "Enter the size of the array: ";
    cin >> input;

    vector<int> nums(input);

    // array creation
    arrayBuilderfun(nums);

    // display the array
    cout << "Array: ";
    displayArray(nums);

    // find the min difference
    int result = minDifference(nums);

    cout << "Minimum Difference Between Largest and Smallest Value in Three Moves: " << result << endl;

    return 0;
}
