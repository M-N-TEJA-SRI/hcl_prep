vector<int> circular(Node *head){
    Node *temp=head;
    vector<int>v;
    do{
        v.push_back(temp->data);
        temp=temp->next;
    }while(temp!=head);
    return v;
}
