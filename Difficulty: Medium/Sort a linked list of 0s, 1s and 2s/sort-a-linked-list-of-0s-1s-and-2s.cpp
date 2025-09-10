/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        
        vector<int>arr;
        
        Node* temp=head;
        
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        
        sort(arr.begin(),arr.end());
        
        temp=head;
        
        for(int i=0;i<arr.size();i++){
            temp->data=arr[i];
            temp=temp->next;
        }
        
        return head;
    }
};