#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        int twenty = 0;
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5)five++;
            else if(bills[i] == 10){
                if (five == 0) return false;
                else{
                    ten++;
                    five--;
                }
            }
            else if (bills[i] == 20) {
                if (ten > 0) {
                    if (five > 0) {
                        twenty++;
                        ten--;
                        five--;
                    }
                    else return false;
                }
                else {
                    if (five > 2) {
                        five = five - 3;
                    }
                    else return false;
                }
            }
         }
        return true;
    }
};
int main() {
    Solution s;
    vector<int> num;
    int a;
    cin >> a;
    while (a==5||a==10||a==20){
        num.push_back(a);
        cin >> a;
    }
    cout << s.lemonadeChange(num) << endl;
}