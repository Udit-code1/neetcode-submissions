class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        unordered_map<int, int> h;
        for (int i = 0; i < n.size(); i++) {
            int a = t - n[i];
            if (h.count(a)) {
                return {h[a], i};
            }
            h[n[i]] = i;
        }
        return {}; 
    }
};
