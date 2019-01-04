#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:

    int removeDuplicates(vector<int> &nums) {
        if (nums.empty()) return 0;

        int index = 0;
        for (int i = 1; i < nums.size(); i++) {

            if (nums[index] != nums[i])

                nums[++index] = nums[i];
        }
        return index + 1;

    }

};

int main() {
    vector<int> A = {1, 1, 2, 3, 4};
    Solution solution;
    int result = solution.removeDuplicates(A);
    cout << "the result is:" << endl;
    cout << result << endl;
    return 0;
}