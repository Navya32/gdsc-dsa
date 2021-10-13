class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        unordered_map<int, int>m;
        vector<int>ans;
    for(int i = 0; i < n; i++) {
        if(m.count(arr[i]) == 0) {
            m[arr[i]] = i;
        }
        else {
            ans.push_back(m[arr[i]]);
        }
    }
    sort(ans.begin(), ans.end());
    if(ans.size() == 0) {
        return -1;
    }
    return ans[0] + 1;
    }
};