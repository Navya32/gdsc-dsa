class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
    int prefixArr[n], suffixArr[n];
    suffixArr[n-1] = nums[n-1];
    prefixArr[0] = nums[0];
    for(int i = 1; i < n; i++) {
        prefixArr[i] = nums[i] + prefixArr[i-1];
    }
    for(int i = n-2; i >= 0; i--) {
        suffixArr[i] = nums[i] + suffixArr[i+1];
    }
    for(int i = 0; i < n; i++) {
        if(prefixArr[i] == suffixArr[i]) {
            return i;
        }
    }
    return -1;
    }
};