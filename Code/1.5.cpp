#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> nums;
        int n = 1;
        for (int i = 0; i < s.size(); i++) {
            vector<int> m;
            if (s[i] == s[i + 1]) {
                n++;
            }
            else{
                if (n > 2) {
                    m.push_back(i - n + 1);
                    m.push_back(i);
                    nums.push_back(m);
                }
                n = 1;
            }
        }
        return nums;
    }
};
int main() {
    Solution solution;
    string s = "abcdddeeeeaabbbcd";
    vector<vector<int>> n = solution.largeGroupPositions(s);
    for (int i = 0; i < n.size(); i++) {
        cout << "[";
        for (int j = 0; j < n[i].size(); j++) {
            cout << n[i][j] << ",";
        }
        cout << "]" << endl;
    }
}