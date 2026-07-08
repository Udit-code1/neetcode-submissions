class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int i=0,n=arr.size(),j=n-1;
        while(i<j){
            if(arr[i]+arr[j]>target)
            j--;
            else if(arr[i]+arr[j]<target)
            i++;
            else
            break;
        }
        return {i+1,j+1};
    }
};
