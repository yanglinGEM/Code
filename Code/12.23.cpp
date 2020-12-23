#include<iostream>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        if (n == 1)return 0;
        int i = 0, j = 0;
        for(i=0;i<n;i++){
            for (j = 0; j < n; j++) {
                if (s[i] == s[j]&&i!=j) break;
            }
            if (j == n)return i;
        }
        return -1;
    }
};
int main() {
    string s;
    cin >> s;
    Solution solution;
    cout << solution.firstUniqChar(s) << endl;
}