class Solution{
    public:
    // User function to complete
    // arr[]: input array
    // n: size of array
    // k: find element smaller and closest to it. 
    int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        int diff = INT_MAX, ans = -1;
        for(int i = 0; i < n; i++) {
            int curr = x - arr[i];
            if(curr < diff and curr > 0) {
                diff = curr;
                ans = arr[i];
            }
        }
        return ans;
    }
};