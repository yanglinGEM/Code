#include<iostream>
#include<string>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    //bool wordPattern(string pattern, string s) {
    //    int i = 0, j = 0, z = 0;
    //    string temp;
    //    vector<string> a;
    //    while (z!=s.size()+1){
    //        if (s[i] == ' ' || z == s.size()) {
    //            temp = s.substr(j, i);
    //            a.push_back(temp);
    //            j = z + 1;
    //            i = 0;
    //            z++;
    //        }
    //        else {
    //            i++;
    //            z++;
    //        }
    //    }
    //    for (int k = 0; k < a.size(); k++) {
    //        cout << a[k] << endl;
    //    }
    //    return true;
    //}
    bool wordPattern(string pattern, string str) {
        unordered_map<string, char> str2ch;
        unordered_map<char, string> ch2str;
        int m = str.length();
        int i = 0;
        for (auto ch : pattern) {
            if (i >= m) {
                return false;
            }
            int j = i;
            while (j < m && str[j] != ' ') j++;
            const string& tmp = str.substr(i, j - i);
            if (str2ch.count(tmp) && str2ch[tmp] != ch) {
                return false;
            }
            if (ch2str.count(ch) && ch2str[ch] != tmp) {
                return false;
            }
            str2ch[tmp] = ch;
            ch2str[ch] = tmp;
            i = j + 1;
        }
        return i >= m;
    }
};
int main() {
    Solution s;
    string str = "dog goa asd sad asd qwe";
    cout << s.wordPattern(str, str) << endl;
}