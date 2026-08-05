class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int>pq;
        for(int i : s)
            pq.push(i);
        while(pq.size()>1){
            int x = pq.top();
            pq.pop();
            int y= pq.top();
            pq.pop();
            if(x!=y){
                pq.push(abs(x-y));
            }
        }
        if(pq.size()==1)
            return pq.top();
        else
            return 0;
    }
};
