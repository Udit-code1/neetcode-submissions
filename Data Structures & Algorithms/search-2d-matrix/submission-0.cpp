class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int x=0,n=nums.size(),y=n-1,mid;
        while(x<=y){
            mid=(y+x)/2;
            if(nums[mid]>target)
                y=mid-1;
            else if(nums[mid]<target)
                x=mid+1;
            else
                return true;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int l=m[0].size();
        for(int i=0;i<m.size();i++){
            if(target>=m[i][0] && target<=m[i][l-1]){
                return search(m[i],target);
            }
        }
        return false;
    }
};
