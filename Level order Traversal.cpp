 void levelOrder(Node * root) {
        queue<Node *> q;
        Node* temp=root;
        q.push(temp);
        while(!q.empty()){
            temp=q.front();
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);
            cout << temp->data << " ";
            q.pop();
    }
}
