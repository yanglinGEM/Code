#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	int findContentChildren(vector<int>& g, vector<int>& s) {
		sort(g.begin(), g.end());
		sort(s.begin(), s.end());
		int sum = 0;
		int j = g.size() - 1;
		int i = s.size() - 1;
		while ( i >= 0 && j >= 0) {
			if (s[i] >= g[j]) {
				sum++;
				i--;
				if (j == 0)break;
				j--;
			}
			else {
				if (j == 0)break;
				j--;
			}
		}
		return sum;
	}
};
int main() {

}