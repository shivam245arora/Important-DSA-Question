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
       ListNode *temp=head;
        vector<int>arr;
       while(temp!=NULL){

        arr.push_back(temp->val);
        temp=temp->next;
       }
        int low=0;
        int high=arr.size()-1;
        while(low<high){
            if(arr[low]!=arr[high]){
                return false;
                
            }
            low++;
                high--;
            
        }return true;
    }
};