class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         vector <int> v;
        auto it = lower_bound(nums.begin(), nums.end(), target);
        if(it == nums.end() or nums[it-nums.begin()] != target) {
            return {-1,-1};
        } else {
        v.push_back(it-nums.begin());
        auto it2 = lower_bound(nums.begin(), nums.end(), target+1);
        v.push_back(it2-nums.begin()-1);
        }
        return v;
    }
};