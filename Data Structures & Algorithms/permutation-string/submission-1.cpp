class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> ms1, ms2;
        for(char c : s1)
            ms1[c]++;
        int i = 0;
        for(int j = 0; j < s2.length(); j++) {
            if(ms1.find(s2[j]) == ms1.end()) {
                ms2.clear();
                i = j + 1;
                continue;
            }
            ms2[s2[j]]++;
            while(ms2[s2[j]] > ms1[s2[j]]) {
                ms2[s2[i]]--;
                if(ms2[s2[i]] == 0)
                    ms2.erase(s2[i]);
                i++;
            }
            while(j - i + 1 > s1.length()) {
                ms2[s2[i]]--;
                if(ms2[s2[i]] == 0)
                    ms2.erase(s2[i]);
                i++;
            }

            if((j - i + 1) == s1.length() && ms1 == ms2)
                return true;
        }

        return false;
    }
};