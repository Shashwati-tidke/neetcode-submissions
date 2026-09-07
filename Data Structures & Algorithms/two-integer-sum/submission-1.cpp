class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (mp.count(need)) {
                return {mp[need], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    */
    int n=nums.size();
    vector <int> res(2);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                res[0]=i;
                res[1]=j;
                break;
            }
        }
    }
    return res;




    }
};
