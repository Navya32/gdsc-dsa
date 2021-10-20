class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> ans;
        int maxEl = INT_MIN;
        for(int i = n-1; i >= 0; i--) {
            if(a[i] >= maxEl) {
                ans.push_back(a[i]);
                maxEl = a[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};