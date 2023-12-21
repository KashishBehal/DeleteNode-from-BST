Node *deleteNode(Node *root, int X) {
    if(root==NULL){
        return NULL;
    }
    if(root->data<X){
        root->right=deleteNode(root->right , X);
    }
    else if(root->data>X){
        root->left=deleteNode(root->left , X);
        
    }
    else{
        if(root->left==NULL   && root->right==NULL){
            return NULL;
        }
         else if(root->left==NULL   && root->right!=NULL){
             return root->right;
            
        }
       else  if(root->left!=NULL   && root->right==NULL){
            return root->left;
        }
        Node *temp=root->right;
        while(temp->left){
            temp=temp->left;
        }
        temp->left=root->left;
        return root->right;
    }
    return root;
}
