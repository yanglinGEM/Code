class Solution {
public:
    int fib(int n) {
        if (n == 0)return 0;
        if (n == 1)return 1;
        int x0 = 0;
        int x1 = 1;
        int x;
        for (int i = 1; i < n; i++) {
            x = x0 + x1;
            x0 = x1;
            x1 = x;
        }
        return x;
    }
};