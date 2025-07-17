void post(Node *root,vector<int>&v){
    if(root!=NULL){
     
        post(root->left,v);
        
        post(root->right,v);
           v.push_back(root->data);
    }
}
vector<int> postorder(Node *root){
    vector<int>v;
    post(root,v);
    return v;
}
