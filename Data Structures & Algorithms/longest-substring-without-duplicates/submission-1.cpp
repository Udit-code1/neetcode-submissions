class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        map<char,int>h;
        int i=0,j=0,ans=0;
        while(j<n){
            if(h[s[j]]==0)
            {
                h[s[j]]++;
                 ans=max(ans,j-i+1);
                j++;
            }
            while(h[s[j]]!=0){
                h[s[i]]--;
                i++;
            }
           
        }
        return ans;
    }
};
