#include<iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mymap;
        mymap[s[0]] = t[0];
        for (int i = 1; i < s.size(); i++) {
            if (mymap.count(s[i]) == 0) {
                for (int j = 0; j < i; j++) {
                    if (t[j] == t[i])
                        return false;
                    else
                        mymap[s[i]] = t[i];
                }                
            }
            else {
                if (mymap[s[i]] != t[i])
                    return false;
            }
        }
        return true;
    }
};
int main() {

}