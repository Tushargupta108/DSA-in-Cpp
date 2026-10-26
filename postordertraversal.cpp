#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int x){
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }
};


Node*BinaryTree(){
int x;
cin>>x;
if(x==-1){
    return NULL;
}
Node*temp=new Node(x);
cout<<"Enter left child of "<<temp->data<<endl;
temp->left=BinaryTree();
cout<<"Enter right child of"<<temp->data<<endl;
temp->right=BinaryTree();
return temp;
}

void PostOrderTraversal(Node*root){
    if(root==NULL){
        return;
    }
    
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" 1";
}




int main(){
    cout<<"Enter the root node"<<endl;
    Node*root=BinaryTree();
    // returns the add of nodes
    cout<<"POST ORDER TRAVERSAL : ";
    PostOrderTraversal(root);
   
}


