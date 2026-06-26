class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       int l,l1;
       l=s.length();
       l1=t.length();
       if(l==l1)
       {
        for(int i=0;i<l;i++)
        {
            if(s[i]!=t[i])
            return false;
        }
       }
       else
       return false;
       return true;
    }
};
