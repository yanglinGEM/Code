#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> list;
        int prefix = 0;
        int length = A.size();
        for (int i = 0; i < length; i++) {
            prefix = ((prefix << 1) + A[i]) % 5;
            list.emplace_back(prefix == 0);
        }
        return list;
    }
};


int main() {
    Solution solution;
    vector<int> nums = { 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1 };
    vector<bool> result = solution.prefixesDivBy5(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

}