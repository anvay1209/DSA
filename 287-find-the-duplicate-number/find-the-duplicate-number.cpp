class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int a=-1;
        for(int i : nums){
            if (s.find(i)!= s.end()) a=i;
            s.insert(i);
        }
        return a;
    }
};