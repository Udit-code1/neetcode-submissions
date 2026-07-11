class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>v;
        int i=1,j;
        v.push_back(*max_element(nums.begin(),nums.begin()+k));
        j=k;
        while(j<nums.size()){
            v.push_back(*max_element(nums.begin()+i,nums.begin()+j+1));
            i++;
            j++;
        }
        return v;
    }
};
