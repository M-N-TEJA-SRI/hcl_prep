Node* rotate(Node *head,int k){
    vector<int>v;
    Node *temp=head,*t=head;
    while(temp){
        v.push_back(temp->data);
        temp=temp->next;
    }
    k%=v.size();
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    reverse(v.begin(),v.end());
    int i=0;
    while(t){
        t->data=v[i++];
        t=t->next;
    }
    return head;
}
