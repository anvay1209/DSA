class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        getcomb(candidates, ans, comb, 0, target);
        return ans;
    }

    void getcomb(vector<int>& candidates, vector<vector<int>>& ans,vector<int>& comb, int i, int target) {
        if (target == 0) {
            ans.push_back(comb);
            return;
        }
        if (i == candidates.size() || target < 0) return;
        comb.push_back(candidates[i]);
        getcomb(candidates, ans, comb, i, target - candidates[i]);  // FIXED HERE
        comb.pop_back();
        getcomb(candidates, ans, comb, i + 1, target);
    }
};