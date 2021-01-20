#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        //Ax + By = 0;
        int x1 = coordinates[0][0];
        int x2 = coordinates[1][0];
        int y1 = coordinates[0][1];
        int y2 = coordinates[1][1];
        float k = (y1 - y2) / (x1 - x2);
        int b = y1 - k * x1;
        for (int i = 2; i < coordinates.size(); i++) {
            if (coordinates[i][0] * k + b == coordinates[i][1]);
            else return false;
        }
        return true;
    }
};
int main() {
    vector<vector<int>> coordinates = { {1, 1} ,{2, 3},{3, 4},{4, 5},{5, 6},{7, 7} };
    Solution s;
    cout << s.checkStraightLine(coordinates) << endl;
         
}