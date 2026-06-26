class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>f;
        int n=nums.size();
        vector<vector<int>>v(nums.size()+1);
        for(int it : nums)
        f[it]++;

        for(auto &[num,count] : f)
        v[count].push_back(num);
        vector<int>ans;
        for(int i=n;i>=1 && ans.size()<=k;i--){
            for(int it : v[i])
            ans.push_back(it);
            if(ans.size()==k)
            break;
        }
        return ans;
    }
};
