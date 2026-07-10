
 class Solution {
    public:
        int maxArea(vector<int>& h) {
                int n=h.size();
                        int i=0,j=n-1;
                                int ans=0;
                                        while(i<j){
                                                    int a=min(h[i],h[j])*(j-i);
                                                                ans=max(ans,a);
                                                                            if(h[i]<h[j])
                                                                                            i++;
                                                                                                        else
                                                                                                                        j--;
                                                                                                                                }
                                                                                                                                        return ans;
                                                                                                                                            }
                                                                                                                                            };


