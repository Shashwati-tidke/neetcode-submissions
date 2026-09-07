class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high =0;
        for(auto p: piles){
            if(p>high) {high=p;}
        }
        int ans = high;

        while(low <= high){
            int mid = low + (high-low)/2;
            long long count =0;
            for(int p: piles){
                count+= (p+mid-1)/mid;
            }
            if(count <= h){
                ans=mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};
