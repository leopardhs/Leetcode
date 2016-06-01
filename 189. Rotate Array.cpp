class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size(); /*右移的位数可能会大于数组的长度*/
        int tmp[k];
        for(int i = nums.size()-1, j = k-1; i >= nums.size()-k && j >= 0; i--,j--)
            tmp[j] = nums[i];
        for(int i = nums.size()-k-1; i >= 0; i--)
            nums[i+k] = nums[i];
        for(int i = 0; i < k; i++)
            nums[i] = tmp[i];
    }
};