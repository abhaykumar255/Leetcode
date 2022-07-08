class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
        vector<int> ans(n,0);
        int l=0;
        int r=n-1;
        
        for(int i=n-1;i>=0;i--){
            if(nums[l]>nums[r]){
                ans[i]=nums[l];
                l++;
            }
            else{
                ans[i]=nums[r];
                r--;
            }
        }
        return ans;
        
    }
};