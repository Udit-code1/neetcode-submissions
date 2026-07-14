class Solution {
public:
    int search(vector<int>& nums, int target) {
        int x=0,n=nums.size(),y=n-1,mid;
        while(x<=y){
            mid=(y+x)/2;
            if(nums[mid]>target)
                y=mid-1;
            else if(nums[mid]<target)
                x=mid+1;
            else
                return mid;
        }
        return -1;
    }
};
