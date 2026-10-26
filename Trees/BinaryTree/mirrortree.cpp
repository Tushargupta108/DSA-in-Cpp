// make mirror image of a binary tree
// approach-> make left side of a right and right to left 
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
Node* binary(){
   int x;
   cin>>x;
   if(x==-1)return NULL;
   Node*root=new Node(x);
   cout<<"enter left value of node"<<root->data<<endl;
   root->left=binary();
   cout<<"enter the right child of node"<<root->data<<endl;
   root->right=binary();
   return  root;
}

void identical(Node*root){
    if(root==NULL){
        return ;
    }
    //swap left node with right node
    Node*temp=root->left;
    root->left=root->right;
    root->right=temp;

    // call for child nodes
     identical(root->left);
     identical(root->right);
}

void printtree(Node*root){
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" "<<endl;
    
    printtree(root->left);
    printtree(root->right);
}
int main(){
    cout<<"enter root node of a tree"<<endl;
    Node*root=binary();
    cout<<"non mirrored tree "<<endl;
    printtree(root);
    // mirroing
    identical(root);
    cout<<"mirrored tree is "<<endl;
    printtree(root);
}