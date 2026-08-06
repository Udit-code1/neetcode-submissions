class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
       priority_queue<
                pair<double, vector<int>>,
                vector<pair<double, vector<int>>>,
                greater<pair<double, vector<int>>>
            > pq;
        double mn=INT_MAX;
        for (int i = 0; i < p.size(); i++) {
            double c = sqrt(p[i][0] * p[i][0] + p[i][1] * p[i][1]); 
            pq.push({c, p[i]});
            mn=min(mn,c);
            }
            vector<vector<int>>v;
       while (k--) {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
