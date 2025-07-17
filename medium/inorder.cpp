void in(Node *root,vector<int>&v){
    if(root!=NULL){
        in(root->left,v);
        v.push_back(root->data);
        in(root->right,v);
    }
}
vector<int> inorder(Node *root){
    vector<int>v;
    in(root,v);
    return v;
}
