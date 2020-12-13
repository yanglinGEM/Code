#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size() == 0)return false;
        qsort(nums, 0, nums.size()-1);
        for (int i = 0; i < nums.size() - 1; i++)
            if (nums[i] == nums[i + 1]) return true;
        return false;
    }
    void qsort(vector<int>& lst, int head, int tail) {

        if (head >= tail) return;

        int i = head, j = tail;

        int pivot = lst[head];  // ͨ��ȡ��һ����Ϊ��׼

        while (i < j) { // i,j �������˳�ѭ��
            while (i < j and lst[j] >= pivot) j--;
            lst[i] = lst[j];    // ��������ɨ�裬���Ȼ�׼С��������
            while (i < j and lst[i] <= pivot) i++;
            lst[j] = lst[i];    //  ��������ɨ�裬���Ȼ�׼�������ұ�
        }

        lst[i] = pivot; // �� ��׼�� ���

        qsort(lst, head, i - 1);    // �Ի�׼��Ϊ�����ҷ���
        qsort(lst, j + 1, tail);
    }
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    while (n != 0) {
        nums.push_back(n);
        cin >> n;
    }
    Solution s;
    cout << s.containsDuplicate(nums) << endl;
}