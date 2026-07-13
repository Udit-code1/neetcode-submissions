class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>>st;
        int n=t.size();
        vector<int>v(n,0);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first<=t[i])
                st.pop();
            if(st.empty())
                v[i]=0;
            else
                v[i]=st.top().second-i;
            st.push({t[i],i});
        }
        return v;
    }
};
