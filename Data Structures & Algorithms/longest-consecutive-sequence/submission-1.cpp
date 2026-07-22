class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        unordered_set<int> store(nums.begin(),nums.end());

        for(int num : nums){
            int s=0,c=num;
            while(store.find(c) != store.end()){
                s++;
                c++;
            }
            res=max(res,s);
        }
        return res;
    }
};
