/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> temp;
        ListNode* work=head;
        while(work!=NULL){
            temp.push_back(work->val);
            work = work->next;
        }
        int left = 0;
        int right = temp.size()-1;
        while(left<right){
            if (temp[left] != temp[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};