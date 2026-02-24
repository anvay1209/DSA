class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());      
        vector<vector<int>> ans;
        vector<int> comb;
        getcomb(arr, ans, comb, target, 0);
        return ans;
    }

    void getcomb(vector<int>& arr, vector<vector<int>>& ans,
                 vector<int>& comb, int target, int i) {

        if (target == 0) {
            ans.push_back(comb);
            return;
        }

        if (i >= arr.size() || target < 0) return;

        comb.push_back(arr[i]);
        getcomb(arr, ans, comb, target - arr[i], i + 1);
        comb.pop_back();

        int nextIndex = i + 1;
        while (nextIndex < arr.size() && arr[nextIndex] == arr[i])
            nextIndex++;

        getcomb(arr, ans, comb, target, nextIndex);
    }
};