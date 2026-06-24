/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        // code here
        Node *nn=new Node(val);
        if(pos==1){
            nn->next=head;
            head=nn;
            return head;
        }
        Node *temp=head;
        
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        
        nn->next=temp->next;
        temp->next=nn;
        return head;   
    }
};