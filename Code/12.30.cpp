#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()!=1) {
            sort(stones.begin(),stones.end());
            int x = abs(stones[stones.size() -1] - stones[stones.size() -2]);
            stones.pop_back();
            stones.pop_back();
            stones.push_back(x);
        }
        return stones[0];
    }
};