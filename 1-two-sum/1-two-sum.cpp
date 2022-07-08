class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v1,v2;
        v1=nums;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int start=0,end=n-1;
        int sum=0;
        while(start<end){
            sum=nums[start]+nums[end];
            if(sum==target) break;
            else if(sum<target) start++;
            else end--;
        }
        for(int i=0;i<n;i++){
            if(v1[i]==nums[start]) v2.push_back(i);
            else if(v1[i]==nums[end]) v2.push_back(i);
        }
        return v2;
        
    }
};