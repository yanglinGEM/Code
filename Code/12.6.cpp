#include <iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int numRows) {
    vector<vector<int>>obj;
    vector<int>a,b;
    a.push_back(1);
    b.push_back(1);
    b.push_back(1);
    if (numRows == 0)
        return obj;
    obj.push_back(a);
    if (numRows == 1)
        return obj;
    obj.push_back(b);
    if (numRows == 2)
        return obj;
    for (int i = 2; i < numRows; i++){
        vector<int> b;
        b.push_back(1);
        for (int j = 0; j < obj[i-1].size()-1; j++) {
            b.push_back(obj[i-1][j]+obj[i-1][j+1]);
        }
        b.push_back(1);
        obj.push_back(b);
    }
    return obj;
}
int main(){
    int num;
    cout << "inoput num:";
    cin >> num;
    vector<vector<int>> obj;
    obj = generate(num);
    for (int i = 0; i < obj.size(); i++){
        for (int j = 0; j < obj[i].size(); j++) {
            cout << obj[i][j] << " ";
        }
        cout << endl;
    }
}

