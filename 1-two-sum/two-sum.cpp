class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ans;
        for(int i=0; i<nums.size(); i++){
            int c= target - nums[i];
            if(ans.find(c)!= ans.end()){
                return {ans[c],i};
            }
            ans[nums[i]]=i;
        }
        return {};
    }
};