#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    //int monotoneIncreasingDigits(int N) {
    //    for (int i = N; i > 0; i--) {
    //        string s = to_string(i);
    //        int j;
    //        for (j = 0; j < s.size() - 1; j++) {
    //            if (s[j] > s[j + 1])break;
    //        }
    //        if (j == s.size() - 1 ) return i;
    //    }
    //    return 0;
    //}
    int monotoneIncreasingDigits(int N) {
        string strN = to_string(N);
        int i = 1;
        while (i < strN.length() && strN[i - 1] <= strN[i]) {
            i += 1;
        }
        if (i < strN.length()) {
            while (i > 0 && strN[i - 1] > strN[i]) {
                strN[i - 1] -= 1;
                i -= 1;
            }
            for (i += 1; i < strN.length(); ++i) {
                strN[i] = '9';
            }
        }
        return stoi(strN);
    }
};
int main() {
    Solution s;
    int num;
    cin >> num;
    cout << s.monotoneIncreasingDigits(num) << endl;
}