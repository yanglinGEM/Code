#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int uniquePaths(int m, int n) {
        if (m == 1 || n == 1)return 1;
        else return uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
    }
    //�ݹ鷨����һ��ͻᳬʱ��Ч�ʺܵ��¡�
    int uniquePaths(int m, int n) {
        vector<vector<int>> f(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            f[i][0] = 1;
        }
        for (int j = 0; j < n; ++j) {
            f[0][j] = 1;
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                f[i][j] = f[i - 1][j] + f[i][j - 1];
            }
        }
        return f[m - 1][n - 1];
    }
    //��̬�滮
    int uniquePaths(int m, int n) {
        long long ans = 1;
        for (int x = n, y = 1; y < m; ++x, ++y) {
            ans = ans * x / y;
        }
        return ans;
    }
    //������ϣ����������������������
};

int main() {
    int m,n;
    cin >> m >> n;
    Solution s;
    cout << s.uniquePaths(m,n) << endl;
}