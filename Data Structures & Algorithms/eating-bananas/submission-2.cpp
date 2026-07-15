class Solution {
public:
    int check(vector<int>&p , int h, int r){
        int c=0;
        for(int i=0;i<p.size();i++){
              c += (p[i] + r - 1) / r; 
        }
        return c;
    }
    int minEatingSpeed(vector<int>& p, int h) {
        int x=1,y=*max_element(p.begin(),p.end()),mid;
        while(x<=y){
            mid=x+(y-x)/2;
            int a=check(p,h,mid);
            if(a>h)
                x=mid+1;
            else
                y=mid-1;
        }
        return x;

    }
};
