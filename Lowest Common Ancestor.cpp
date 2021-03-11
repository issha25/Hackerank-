Node *lca(Node *root, int v1,int v2) {
        if(root->data > max(v1,v2))
            return lca(root->left,v1,v2);
        else if(root->data < min(v1,v2))
            return lca(root->right,v1,v2);
        else
            return root;
		// Write your code here.
    }
