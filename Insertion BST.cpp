  Node * insert(Node * root, int data) {

        if(root==NULL)
            return new Node(data);
        if(root->data > data){
            if(root->left==NULL)
                root->left=new Node(data);
            else
                insert(root->left,data);
        }
        if(root->data < data){
            if(root->right==NULL)
                root->right=new Node(data);
            else
                insert(root->right,data);
        }
        return root;
    }
