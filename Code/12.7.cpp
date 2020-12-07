#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string, int> m = { {"I", 1}, {"IV", 3}, {"IX", 8}, {"V", 5}, {"X", 10}, {"XL", 30}, {"XC", 80}, {"L", 50}, {"C", 100}, {"CD", 300}, {"CM", 800}, {"D", 500}, {"M", 1000} };
        int r = m[s.substr(0, 1)];
        for (int i = 1; i < s.size(); ++i) {
            string two = s.substr(i - 1, 2);
            string one = s.substr(i, 1);
            r += m[two] ? m[two] : m[one];
        }
        return r;
    }
    bool isPalindrome(int x) {
        if (x < 0) return false;
        else if (x == 0) return true;
        else{
            vector<int> a;
            while (1) {
                a.push_back(x % 10);
                x = x / 10;
                if (x == 0)break;
            }
            for (int i = 0; i < a.size(); i++) {
                if (a[i] != a[a.size() - i - 1]) return false;
            }
            return true;
        }
    }
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};
int main() {
    Solution solution;
    string roman;
    cin >> roman;
    cout << solution.romanToInt(roman) << endl;
    //int num,s;
    //cout << "inoput num:";
    //cin >> num;
    //s = solution.reverse(num);
    //cout << s << endl;
    //if (solution.isPalindrome(num))
    //    cout << "true" << endl;
    //else cout << "fales" << endl;
}

