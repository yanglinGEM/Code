#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        if (nums.size() == 0)return v;
        int begin=nums[0],end=nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - 1 != nums[i - 1]) {
                end = nums[i-1];
                if (begin == end) {
                    string a=to_string(begin);
                    v.push_back(a);
                }
                else {
                    string a=to_string(begin);
                    a.insert(a.size() ,"->");
                    a.insert(a.size() , to_string(end));
                    v.push_back(a);
                }
                begin = nums[i];
            }
           
            if (i == nums.size()-1) {
                end = nums[i];
                if (begin == end) {
                    string a = to_string(begin);
                    v.push_back(a);
                }
                else {
                    string a = to_string(begin);
                    a.insert(a.size(), "->");
                    a.insert(a.size(), to_string(end));
                    v.push_back(a);
                }
            }
        }
        if (nums.size()==1)
            v.push_back(to_string(begin));

        return v;
    }
};
int main() {
    Solution solution;
    vector<int> nums = { -124, -123, 1};
    for(int i=0;i<solution.summaryRanges(nums).size();i++)
        cout<<solution.summaryRanges(nums)[i]<<endl;

}