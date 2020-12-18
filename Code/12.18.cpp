#include<iostream>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        if (s == "")return t[0];
        int a[26];
        for (int i = 0; i < 26; i++) {
            a[i] = 0;
        }
        for (int i = 0; i < s.size(); i++) {
            a[s[i] - 'a']++;
        }
        for (int i = 0; i < t.size(); i++) {
            a[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (a[i] == -1)return 'a' + i;
        }
    }
};
int main() {
    Solution solution;
    string s, t;
    cin >> s;
    cin >> t;
    cout << solution.findTheDifference(s, t) << endl;
    
}