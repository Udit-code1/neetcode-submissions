class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();

        for (int u = 0; u < n - 2; u++) {
            if (u > 0 && nums[u] == nums[u - 1])
                continue;

            int i = u + 1;
            int j = n - 1;

            while (i < j) {
                int sum = nums[u] + nums[i] + nums[j];

                if (sum < 0)
                    i++;
                else if (sum > 0)
                    j--;
                else {
                    ans.push_back({nums[u], nums[i], nums[j]});

                    while (i < j && nums[i] == nums[i + 1]) i++;
                    while (i < j && nums[j] == nums[j - 1]) j--;

                    i++;
                    j--;
                }
            }
        }

        return ans;
    }
};