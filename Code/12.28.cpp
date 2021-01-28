#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int leftsum = 0;
            int rightsum = 0;
            for (int j = 0; j < i; j++) {
                leftsum += nums[j];
            }
            for (int k = i + 1; k < n; k++) {
                rightsum += nums[k];
            }
            if (rightsum == leftsum) {
                return i;
            }

              
        }
        return -1;
    }
};


int main() {
    vector<int> coordinates = { 1, 7, 3, 6, 5, 6 };
    Solution s;
    cout << s.pivotIndex(coordinates) << endl;

}