class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partition;
        gap(s, ans, partition);
        return ans;
    }
    
    void gap(string s, vector<vector<string>>& ans, vector<string>& partition) {
        if (s.size() == 0) {
            ans.push_back(partition);
            return;
        }
        for (int i = 0; i < s.size(); i++) {
            string part = s.substr(0, i + 1);
            if (ispalindrome(part)) {
                partition.push_back(part);
                gap(s.substr(i + 1), ans, partition);
                partition.pop_back();
            }
        }
    }
    bool ispalindrome(string s) {
        string s2 = s;
        reverse(s2.begin(), s2.end());
        return s == s2;
    }
};