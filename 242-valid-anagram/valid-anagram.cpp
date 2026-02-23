class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> ans;
        for (char c : s){
            ans[c]++;
        }
        for(char c : t){
            ans[c]--;
            if(ans[c]<0) return false;
        }
        return true;
    }
};