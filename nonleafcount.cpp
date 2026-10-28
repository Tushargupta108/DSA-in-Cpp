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

    if(x==-1)return NULL ;
    Node *temp=new Node(x);
    cout<<"enter left child of "<<temp->data<<endl;
    temp->left=binary();
    cout<<"enter right child of "<<temp->data<<endl;
    temp->right=binary();
    
    return temp;
}

int count(Node*root){
   if(root==NULL)return 0;
//    this helps for when single leaf is zero 
   if(root->left==NULL&&root->right==NULL){
    return 0;
   // If both children are null, this is a leaf node, so we don't count it (return 0
   }
   return (1+count(root->left)+count(root->right));
}

int main(){
    cout<<"enter root node"<<endl;
    Node*root=binary();
    cout<<"total no of non leaf nodes are"<<count(root);
}