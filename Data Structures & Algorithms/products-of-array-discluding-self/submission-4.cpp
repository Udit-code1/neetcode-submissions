class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
         int c1 =count(nums.begin(), nums.end(), 0);
         if(c1==n)
         return nums;
         if(c1>1)
         {
            for(int i=0;i<n;i++)
                nums[i]=0;
                return nums;
         }
        bool f=false;
        int mul=1;
        for(int i : nums){
            if(i==0)
            f=true;
            else
            mul*=i;
        }
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                ans[i]=mul;
            else if(f)
                ans[i]=0;
            else 
                ans[i]=mul/nums[i];
        }
        return ans;
    }
};
