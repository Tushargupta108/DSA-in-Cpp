
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
Node* binarytree(){
    
   int x;
   cin>>x;
  if(x==-1){
    return NULL;
  }
    Node *root=new Node(x);
    cout<<"enter left child of"<<root->data<<endl;
    root->left=binarytree();
    cout<<"enter right  child of "<<root->data<<endl;
    root->right=binarytree();
    return root;
}
 
 int countleaf(Node*root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL&&root->right==NULL)return 1;
    return (countleaf(root->left)+countleaf(root->right));
 }

int main(){
cout<<"enter the root node"<<endl;
Node*root=binarytree();
cout<<"total number of leaf nodes are"<<countleaf(root);
}
