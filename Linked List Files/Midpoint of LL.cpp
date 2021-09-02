Node *midPoint(Node *head)
{
    // Write your code here
    while(head!=NULL && head->next!=NULL){ 
        Node *fast=head->next;
        Node *slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }return slow;
    }return head;
}